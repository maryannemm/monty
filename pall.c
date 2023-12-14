#include <stdio.h>
#include "main.h"

extern Stack stack;

void pall() {
    int i = stack.top;
    
    while (i >= 0) {
        printf("%d\n", stack.stack[i]);
        i--;
    }
}

