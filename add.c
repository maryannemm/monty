#include <stdio.h>
#include <stdlib.h>
#include "main.h"

extern Stack stack;

void add(int line_number) {
    if (stack.top < 1) {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack.stack[stack.top - 1] += stack.stack[stack.top];
    pop(line_number);
}

