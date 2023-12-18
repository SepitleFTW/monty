#include "monty.h"
/**
 * f_add - adds two elements to tthe stack
 * @head: the stacks head
 * @counter: line_numberss
 * Return: no value for return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *hh;
	int len = 0, aux;

	hh = *head;
	while (hh)
	{
		hh = hh->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: cannot add as stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hh = *head;
	aux = hh->n + hh->next->n;
	hh->next->n = aux;
	*head = hh->next;
	free(hh);
}
