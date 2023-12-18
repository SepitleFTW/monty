#include "monty.h"
/**
 * f_mod - computes the stack elements
 * @head: this shows the head of the stack
 * @counter: the number of lines
 * Return: retursn nothing
*/
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *hhh;
	int len = 0, aux;

	hhh = *head;
	while (hhh)
	{
		hhh = hhh->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: CAnnot mod as stack is too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hhh = *head;
	if (hhh->n == 0)
	{
		fprintf(stderr, "L%d: divised by null\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = hhh->next->n % hhh->n;
	hhh->next->n = aux;
	*head = hhh->next;
	free(hhh);
}
