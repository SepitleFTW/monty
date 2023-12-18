#include "monty.h"
/**
 * f_pall - displays the stack below in the GUI
 * @head: the stacks head
 * @counter: No counter is used
 * Return: no value is returned
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *hhhh;
	(void)counter;

	hhhh = *head;
	if (hhhh == NULL)
		return;
	while (hhhh)
	{
		printf("%d\n", hhhh->n);
		hhhh = hhhh->next;
	}
}
