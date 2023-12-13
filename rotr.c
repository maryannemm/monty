/* rotr.c */
#include "monty.h"
#include <stdlib.h>
#include <string.h>

void rotr_op(MontyStack *stack) {
    if (stack->top > 0) {
        int temp = stack->array[stack->top];

        /* Shift elements to the right */
        memmove(stack->array + 1, stack->array, stack->top * sizeof(int));

        stack->array[0] = temp;
    }
}
