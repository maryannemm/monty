/* pchar.c */
#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void pchar_op(MontyStack *stack) {
    if (stack->top >= 0) {
        if (stack->array[stack->top] < 0 || stack->array[stack->top] > 127) {
            fprintf(stderr, "Error: value out of ASCII range\n");
            exit(EXIT_FAILURE);
        }

        putchar(stack->array[stack->top]);
    } else {
        fprintf(stderr, "Error: can't pchar, stack empty\n");
        exit(EXIT_FAILURE);
    }
}

