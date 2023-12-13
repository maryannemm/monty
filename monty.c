#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

void push(int value, MontyStack *stack) {
    if (stack->top < STACK_SIZE - 1) {
        stack->top++;
        stack->array[stack->top] = value;
    } else {
        fprintf(stderr, "Error: Stack overflow\n");
        exit(EXIT_FAILURE);
    }
}

int pop(MontyStack *stack) {
    if (stack->top >= 0) {
        return stack->array[stack->top--];
    } else {
        fprintf(stderr, "Error: Stack empty\n");
        exit(EXIT_FAILURE);
    }
}

void pint(MontyStack *stack) {
    if (stack->top >= 0) {
        printf("%d\n", stack->array[stack->top]);
    } else {
        fprintf(stderr, "Error: can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }
}

void swap(MontyStack *stack) {
    if (stack->top >= 1) {
        int temp = stack->array[stack->top];
        stack->array[stack->top] = stack->array[stack->top - 1];
        stack->array[stack->top - 1] = temp;
    } else {
        fprintf(stderr, "Error: can't swap, stack too short\n");
        exit(EXIT_FAILURE);
    }
}

void add(MontyStack *stack) {
    if (stack->top < 1) {
        fprintf(stderr, "Error: can't add, stack too short\n");
        exit(EXIT_FAILURE);
    }

    stack->array[stack->top - 1] += stack->array[stack->top];
    pop(stack);
}

void nop(void) {
    /* Does nothing */
}

