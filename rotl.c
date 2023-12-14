#include "main.h"

/**
 * rotl - Rotates the stack to the top.
 * @line_number: The line number.
 */
void rotl(int line_number __attribute__((unused))) {
    int temp;

    if (stack.top > 0) {
        temp = stack.stack[0];
        stack.stack[0] = stack.stack[stack.top];
        stack.stack[stack.top] = temp;
    }
}

