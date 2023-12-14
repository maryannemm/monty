#include <stdio.h>
#include <stdlib.h>
#include "main.h"

extern Stack stack;

void mod(int line_number) {
    if (stack.top < 1) {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (stack.stack[stack.top] == 0) {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack.stack[stack.top - 1] %= stack.stack[stack.top];
    pop(line_number);
}

