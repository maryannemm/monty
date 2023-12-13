#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the Monty interpreter
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: EXIT_SUCCESS if successful, otherwise EXIT_FAILURE
 */
int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "USAGE: %s file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    char opcode[256];
    int value;

    stack.top = -1;

    while (fscanf(file, "%s", opcode) != EOF) {
        if (strcmp(opcode, "push") == 0) {
            if (fscanf(file, "%d", &value) == 1) {
                push(value);
            } else {
                fprintf(stderr, "Error: L%d: usage: push integer\n", __LINE__);
                exit(EXIT_FAILURE);
            }
        } else if (strcmp(opcode, "pint") == 0) {
            pint();
        } else if (strcmp(opcode, "pop") == 0) {
            pop();
        } else {
            fprintf(stderr, "Error: L%d: unknown instruction %s\n", __LINE__, opcode);
            exit(EXIT_FAILURE);
        }
    }

    fclose(file);

    return EXIT_SUCCESS;
}

