/* pstr.c */

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pstr_op - Prints the string starting at the top of the stack, followed by a new line
 */
void pstr_op(void)
{
    int i;

    for (i = stack.top; i >= 0 && stack.stack[i] != 0 && (stack.stack[i] >= 32 && stack.stack[i] <= 127); i--) {
        putchar(stack.stack[i]);
    }

    putchar('\n');
}

