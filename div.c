#include "monty.h"
#include <stdlib.h>

/**
 * div_op - Divides the second top element of the stack by the top element
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty file
 */
void div_op(MontyStack *stack, unsigned int line_number) {
    if (stack->top < 2) {
        fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if (stack->array[stack->top - 1] == 0) {
        fprintf(stderr, "L%u: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack->array[stack->top - 2] /= stack->array[stack->top - 1];
    pop(stack);
}

