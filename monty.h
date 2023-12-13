#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>

#define STACK_SIZE 100

typedef struct {
    int array[STACK_SIZE];
    int top;
} MontyStack;

void push(int value, MontyStack *stack);
int pop(MontyStack *stack);
void pint(MontyStack *stack);
void swap(MontyStack *stack);
void add(MontyStack *stack);
void sub(MontyStack *stack);
void mul(MontyStack *stack);
void div_op(MontyStack *stack, unsigned int line_number);
void mod_op(MontyStack *stack);
void nop(void);

#endif /* MONTY_H */
