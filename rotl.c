/* rotl.c */

#include "monty.h"

/**
 * rotl_op - Rotates the stack to the top
 */
void rotl_op(void)
{
    if (stack.top > 0) {
        int temp = stack.stack[stack.top];
        for (int i = 0; i < stack.top; i++) {
            stack.stack[i] = stack.stack[i + 1];
        }
        stack.stack[stack.top] = temp;
    }
}

