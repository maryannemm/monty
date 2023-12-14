#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stdio.h>

Stack stack;

int main(int argc, char *argv[]) {
    FILE *file;
    int value;
    int line_number = 0;
    char opcode[100];

    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    stack.top = -1;  /* Initialize the stack */

    while (fscanf(file, "%s", opcode) != EOF) {
        line_number++;

        if (strcmp(opcode, "push") == 0) {
            if (fscanf(file, "%d", &value) != 1) {
                fprintf(stderr, "L%d: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
            }
            push(value, line_number);
        } else if (strcmp(opcode, "pall") == 0) {
            pall();
        } else if (strcmp(opcode, "pint") == 0) {
            pint(line_number);
        } else if (strcmp(opcode, "pop") == 0) {
            pop(line_number);
        } else if (strcmp(opcode, "swap") == 0) {
            swap(line_number);
        } else if (strcmp(opcode, "add") == 0) {
            add(line_number);
        } else if (strcmp(opcode, "nop") == 0) {
            nop(line_number);
        } else if (strcmp(opcode, "sub") == 0) {
            sub(line_number);
        } else if (strcmp(opcode, "div") == 0) {
            div_op(line_number);
        } else if (strcmp(opcode, "mul") == 0) {
            mul(line_number);
        } else if (strcmp(opcode, "mod") == 0) {
            mod(line_number);
        } else if (strcmp(opcode, "pchar") == 0) {
            pchar(line_number);
        } else if (strcmp(opcode, "pstr") == 0) {
            pstr(line_number);
        } else if (strcmp(opcode, "rotl") == 0) {
            rotl(line_number);
        } else if (strcmp(opcode, "rotr") == 0) {
            rotr(line_number);
        } else {
            fprintf(stderr, "L%d: Unknown opcode: %s\n", line_number, opcode);
            exit(EXIT_FAILURE);
        }
    }

    fclose(file);
    return 0;
}
