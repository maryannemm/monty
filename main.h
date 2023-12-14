#ifndef MAIN_H
#define MAIN_H

#define STACK_SIZE 1024

typedef struct {
    int stack[STACK_SIZE];
    int top;
} Stack;

extern Stack stack;

void push(int value, int line_number);
void pall(void);
void pint(int line_number);
void pop(int line_number);
void swap(int line_number);
void add(int line_number);
void nop(int line_number);
void sub(int line_number);
void div_op(int line_number);
void mul(int line_number);
void mod(int line_number);
void comments(int line_number);
void pchar(int line_number);
void pstr(int line_number);
void rotl(int line_number);
void rotr(int line_number);

#endif /* MAIN_H */

