/* div.c */

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * div_op - Divides the second top element of the stack by the top element
 */
void div_op(void)
{
    if (stack.top < 1) {
        fprintf(stderr, "Error: can't div, stack too short\n");
        exit(EXIT_FAILURE);
    }

    if (stack.stack[stack.top] == 0) {
        fprintf(stderr, "Error: division by zero\n");
        exit(EXIT_FAILURE);
    }

    stack.stack[stack.top - 1] /= stack.stack[stack.top];
    pop();
}

