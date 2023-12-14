#include <stdio.h>
#include <stdlib.h>
#include "main.h"

extern Stack stack;

void pop(int line_number) {
    if (stack.top == -1) {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }
    stack.top--;
}

