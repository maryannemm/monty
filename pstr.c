#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void pstr(int line_number __attribute__((unused)) ) {
    int value;

    while (stack.top != -1) {
        value = stack.stack[stack.top];

        if (value <= 0 || value > 127) {
            break;
        }

        putchar(value);
        stack.top--;
    }

    putchar('\n');
}

