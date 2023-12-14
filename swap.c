#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void swap(int line_number) {
    int temp;

    if (stack.top < 1) {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    temp = stack.stack[stack.top];
    stack.stack[stack.top] = stack.stack[stack.top - 1];
    stack.stack[stack.top - 1] = temp;
}

