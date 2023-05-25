#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define QUEUE 1
#define STACK 0
#define DELIMS " \n\t\a\b"

/* GLOBAL OPCODE TOKENS */
extern.char **op_toks;

/* Function prototypes */
void push(int value);
void pall();
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @queue: 1 if the stack is a queue, 0 if it's a stack
 * @prev: points to the previous element of the stack (or queue)
 * @data: Additional data member for the stack
 * @top: Current top index of the stack
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
	int queue;
	int data;
	int top;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

#endif
