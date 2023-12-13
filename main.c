#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

int main(int argc, char *argv[]) {
    FILE *file = NULL;
    MontyStack *stack = malloc(sizeof(MontyStack)); /* Allocate memory for MontyStack */
    char opcode[256];

    if (stack == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    stack->top = -1; /* Initialize the top after memory allocation */

    if (argc != 2) {
        fprintf(stderr, "USAGE: monty file\n");
        free(stack); /* Free the allocated memory before exiting */
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    if (!file) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        free(stack); /* Free the allocated memory before exiting */
        exit(EXIT_FAILURE);
    }

    while (fscanf(file, "%s", opcode) != EOF) {
        /* Rest of the code remains unchanged */
    }

    fclose(file);
    free(stack); /* Free the allocated memory before exiting */

    return 0;
}

