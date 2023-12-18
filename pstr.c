#include "monty.h"
/**
 * f_pstr - prints a string from the bakc
 * beginning with a new line
 * @head: the stacks head
 * @counter: the line of numbers
 * Return: no value will be returned
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hh;
	(void)counter;

	hh = *head;
	while (hh)
	{
		if (hh->n > 127 || hh->n <= 0)
		{
			break;
		}
		printf("%c", hh->n);
		h = hh->next;
	}
	printf("\n");
}
