#include <stdio.h>
#include <stdlib.h>
#include "main.h"

extern Stack stack;

void pint(int line_number) {
    if (stack.top == -1) {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", stack.stack[stack.top]);
}

