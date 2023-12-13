/* sub.c */

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sub - Subtracts the top element of the stack from the second top element
 */
void sub(void)
{
    if (stack.top < 1) {
        fprintf(stderr, "Error: can't sub, stack too short\n");
        exit(EXIT_FAILURE);
    }

    stack.stack[stack.top - 1] -= stack.stack[stack.top];
    pop();
}

