#include "monty.h"
/**
 * f_pop - this pritns the top
 * @head: the stacks head is printed
 * @counter: line_number  int eh code
 * Return: no value will be returned
*/
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *hh;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: cannot pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	*head = hh->next;
	free(hh);
}
