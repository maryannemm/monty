/* mul.c */

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mul_op - Multiplies the second top element of the stack with the top element
 */
void mul_op(void)
{
    if (stack.top < 1) {
        fprintf(stderr, "Error: can't mul, stack too short\n");
        exit(EXIT_FAILURE);
    }

    stack.stack[stack.top - 1] *= stack.stack[stack.top];
    pop();
}

