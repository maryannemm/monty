/* stack_queue.c */

#include "monty.h"

/**
 * stack_op - Sets the format of the data to a stack (LIFO)
 */
void stack_op(void)
{
    (void)stack;  /* Unused parameter */
    /* Do nothing, as the default behavior is stack (LIFO) */
}

/**
 * queue_op - Sets the format of the data to a queue (FIFO)
 */
void queue_op(void)
{
    int front = 0;
    int rear = stack.top;

    while (front < rear) {
        int temp = stack.stack[front];
        stack.stack[front] = stack.stack[rear];
        stack.stack[rear] = temp;
        front++;
        rear--;
    }
}

