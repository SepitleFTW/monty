#include "monty.h"
/**
 * f_pchar - pritns char at top with a new line
 * @head: the head stack
 * @counter:  the line_nbumber
 * Return: no value will be returned
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *hh;

	hh = *head;
	if (!hh)
	{
		fprintf(stderr, "L%d: cannot pchar, the stack is empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: cannot pchar, the value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
