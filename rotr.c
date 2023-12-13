/* rotr.c */

#include "monty.h"

/**
 * rotr_op - Rotates the stack to the bottom
 */
void rotr_op(void)
{
    if (stack.top > 0) {
        int temp = stack.stack[0];
        for (int i = 0; i < stack.top; i++) {
            stack.stack[i] = stack.stack[i + 1];
        }
        stack.stack[stack.top] = temp;
    }
}

