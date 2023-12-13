/* pchar.c */

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pchar_op - Prints the char at the top of the stack, followed by a new line
 */
void pchar_op(void)
{
    if (stack.top < 0) {
        fprintf(stderr, "Error: can't pchar, stack empty\n");
        exit(EXIT_FAILURE);
    }

    if (stack.stack[stack.top] < 0 || stack.stack[stack.top] > 127) {
        fprintf(stderr, "Error: can't pchar, value out of range\n");
        exit(EXIT_FAILURE);
    }

    putchar(stack.stack[stack.top]);
    putchar('\n');
}

