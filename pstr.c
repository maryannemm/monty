/* pstr.c */
#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void pstr_op(MontyStack *stack) {
    int i = stack->top;

    while (i >= 0 && stack->array[i] != 0 && (stack->array[i] >= 32 && stack->array[i] <= 127)) {
        putchar(stack->array[i]);
        i--;
    }

    putchar('\n');
}

