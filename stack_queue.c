/* stack_queue.c */
#include "monty.h"
#include <stdlib.h>
#include <string.h>

void queue_op(MontyStack *stack) {
    if (stack->top >= 0) {
        int temp = stack->array[0];

        /* Shift elements to the left */
        memmove(stack->array, stack->array + 1, stack->top * sizeof(int));

        stack->array[stack->top] = temp;
    } else {
        fprintf(stderr, "Error: can't queue, stack empty\n");
        exit(EXIT_FAILURE);
    }
}

