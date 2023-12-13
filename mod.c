/* mod.c */

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mod_op - Computes the rest of the division of the second top element by the top element
 */
void mod_op(void)
{
    if (stack.top < 1) {
        fprintf(stderr, "Error: can't mod, stack too short\n");
        exit(EXIT_FAILURE);
    }

    if (stack.stack[stack.top] == 0) {
        fprintf(stderr, "Error: division by zero\n");
        exit(EXIT_FAILURE);
    }

    stack.stack[stack.top - 1] %= stack.stack[stack.top];
    pop();
}

