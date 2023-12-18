#include "monty.h"
/**
 * f_pint - this will print the head
 * @head: this shows the stacks head
 * @counter: the line number
 * Return: no value will be returned
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: cannot pint because the stackis empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
