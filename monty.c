/* monty.c */

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function declarations */
void push(int value);
int pop(void);
void pint(void);
void swap(void);
void add(void);
void sub(void);
void nop(void);
void execute_opcode(const char *opcode);

/* Global variables */
MontyStack stack;

/* Main function */
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
        execute_opcode(opcode);
    }

    fclose(file);

    return EXIT_SUCCESS;
}
