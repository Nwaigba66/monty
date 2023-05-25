#include "monty.h"

#define STACK_SIZE 100

/**
* main - Entry point of the program.
* @value: The integer value to be pushed.
* pall - prints all the values on the stack.
* Return: EXIT _SUCCESS on success, EXIT_FAILURE on failure.
*/

void push(int value);
void pall(void);
/**
* push - Pushes an element to the stack.
* @value: The integer value to be pushed.
*/
void push(int value)
	{
	Node newNode = malloc(sizeof(*Node));

	if (newNode == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}

	newNode->data = value;
	newNode->prev = NULL;
	newNode->next = stack->top;

	if (stack->top != NULL)
	stack->top->prev = newNode;

	stack->top = newNode;
}
/**
 * pall - Prints all the values on the stack.
 */
void pall(void)
	{
	Node current = *stack->top;

	while (current != NULL)
	{
	printf("%d\n", current->data);
	current = current->next;
	}
}
/**
* main - Entry point of the program.
* Return: EXIT _SUCCESS on success, EXIT_FAILURE on failure.
* @argc: Number of arguments.
* @argv: Array of strings.
*/
int main(int argc, char *argv[])
	{
	FILE *file;
	char line[100];
	int line_number = 0;

	if (argc != 2)
	{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");

	if (file == NULL)
	{
	fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
	}
	stack = malloc(sizeof(Stack));

	if (stack == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}
	stack->top = NULL;

	while (fgets(line, sizeof(line), file))
	{
	line_number++;
	line[strcspn(line, "\n")] = '\0';  /* Remove trailing newline character */

	if (strncmp(line, "push ", 5) == 0)
	{
	int value = atoi(line + 5);

	if (value == 0 && line[5] != '0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	push(value);
	}
	else if (strcmp(line, "pall") == 0)
	{
		pall();
	} else
		{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
		exit(EXIT_FAILURE);
		}
	}
	fclose(file);
	free(stack);
	return (0);
}

