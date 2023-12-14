#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void pchar(int line_number) {
    int value;

    if (stack.top == -1) {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = stack.stack[stack.top];
    if (value < 0 || value > 127) {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    putchar(value);
    putchar('\n');
}

