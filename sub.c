#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void sub(MontyStack *stack) {
    if (stack->top < 1) {
        fprintf(stderr, "Error: can't sub, stack too short\n");
        exit(EXIT_FAILURE);
    }

    stack->array[stack->top - 1] -= stack->array[stack->top];
    pop(stack);
}
