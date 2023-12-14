#include "main.h"

/**
 * rotr - Rotates the stack to the bottom.
 * @line_number: The line number.
 */
void rotr(int line_number __attribute__((unused))) {
    int temp;

    if (stack.top > 0) {
        int i = stack.top;
        temp = stack.stack[i];

        while (i > 0) {
            stack.stack[i] = stack.stack[i - 1];
            i--;
        }

        stack.stack[0] = temp;
    }
}

