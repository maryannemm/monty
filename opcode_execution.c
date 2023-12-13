/* opcode_execution.c */

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * execute_opcode - Execute Monty bytecode instructions
 * @opcode: The opcode to be executed
 */
void execute_opcode(const char *opcode)
{
    /* Ignore comment lines */
    if (opcode[0] == '#') {
        return;
    }

    if (strcmp(opcode, "push") == 0) {
        int value;
        if (fscanf(file, "%d", &value) == 1) {
            push(value);
        } else {
            fprintf(stderr, "Error: L%d: usage: push integer\n", __LINE__);
            exit(EXIT_FAILURE);
        }
    } else if (strcmp(opcode, "pint") == 0) {
        pint();
    } else if (strcmp(opcode, "pop") == 0) {
        pop();
    } else if (strcmp(opcode, "swap") == 0) {
        swap();
    } else if (strcmp(opcode, "add") == 0) {
        add();
    } else if (strcmp(opcode, "sub") == 0) {
        sub();
    } else if (strcmp(opcode, "mul") == 0) {
        mul();
    } else if (strcmp(opcode, "div") == 0) {
        div_op();
    } else if (strcmp(opcode, "mod") == 0) {
        mod_op();
    } else if (strcmp(opcode, "nop") == 0) {
        nop();
    } else {
        fprintf(stderr, "Error: L%d: unknown instruction %s\n", __LINE__, opcode);
        exit(EXIT_FAILURE);
    }
}

