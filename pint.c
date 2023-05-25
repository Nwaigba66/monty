#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node* next;
} Node;

typedef struct Stack
{
	Node* top;
} Stack;
Stack* stack;

void pint(int line_number)
{
	if (stack->top == NULL)
	{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	exit(EXIT_FAILURE);
	}
	printf("%d\n", stack->top->data);
}
