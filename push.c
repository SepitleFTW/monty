#include "monty.h"
/**
 * f_push -this will add node to stack
 * @head: the stacks head
 * @counter: the lines_number
 * Return: no value will be returned
*/
void f_push(stack_t **head, unsigned int counter)
{
	int mn, jk = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			jk++;
		for (; bus.arg[jk] != '\0'; jk++)
		{
			if (bus.arg[jk] > 57 || bus.arg[jk] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	mn = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, mn);
	else
		addqueue(head, mn);
}
