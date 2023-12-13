#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void mod_op(MontyStack *stack) {
    if (stack->top < 1) {
        fprintf(stderr, "Error: can't mod, stack too short\n");
        exit(EXIT_FAILURE);
    }

    if (stack->array[stack->top] == 0) {
        fprintf(stderr, "Error: division by zero\n");
        exit(EXIT_FAILURE);
    }

    stack->array[stack->top - 1] %= stack->array[stack->top];
    pop(stack);
}

