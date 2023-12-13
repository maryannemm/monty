#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/* Structure to represent the stack */
typedef struct {
    int stack[1000];
    int top;
    int mode;  /* 0 for stack, 1 for queue */
} Stack;

extern Stack stack;
extern FILE *file;

/* Monty opcode functions */
void push(int value);
void pall(void);
void pint(void);
void pop(void);
void swap(void);
void add(void);
void sub(void);
void mul(void);
void div_op(void);
void mod_op(void);
void nop(void);
void pchar_op(void);
void pstr_op(void);
void rotl_op(void);
void rotr_op(void);
void stack_op(void);
void queue_op(void);

/* Brainf*ck interpreter function */
void execute_bf(const char *filename);

#endif /* MONTY_H */

