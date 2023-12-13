/* opcode_execution.c */

#include <string.h>
#include <stdlib.h>
#include "monty.h"

void execute_opcode(const char *opcode, MontyStack *stack, unsigned int line_number, FILE *file)
{
    /* Ignore comment lines */
    if (opcode[0] == '#') {
        return;
    }

    if (strcmp(opcode, "push") == 0) {
        int value;
        if (fscanf(file, "%d", &value) == 1) {
            push(value, stack);
        } else {
            fprintf(stderr, "Error: L%d: usage: push integer\n", line_number);
            exit(EXIT_FAILURE);
        }
    } else if (strcmp(opcode, "pint") == 0) {
        pint(stack);
    } else if (strcmp(opcode, "pop") == 0) {
        pop(stack);
    } else if (strcmp(opcode, "swap") == 0) {
        swap(stack);
    } else if (strcmp(opcode, "add") == 0) {
        add(stack);
    } else if (strcmp(opcode, "sub") == 0) {
        sub(stack);
    } else if (strcmp(opcode, "mul") == 0) {
        mul(stack);
    } else if (strcmp(opcode, "div") == 0) {
        if (stack->top < 2) {
            fprintf(stderr, "Error: L%d: can't div, stack too short\n", line_number);
            exit(EXIT_FAILURE);
        }
        div_op(stack, line_number);
    } else if (strcmp(opcode, "mod") == 0) {
        if (stack->top < 2) {
            fprintf(stderr, "Error: L%d: can't mod, stack too short\n", line_number);
            exit(EXIT_FAILURE);
        }
        mod_op(stack);
    } else if (strcmp(opcode, "nop") == 0) {
        nop();
    } else {
        fprintf(stderr, "Error: L%d: unknown instruction %s\n", line_number, opcode);
        exit(EXIT_FAILURE);
    }
}

