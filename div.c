#include "monty.h"
/**
*f_div - splits the elements of the stack
*@head: the head of the stack
*counter: the line' number
*Return: Nothing will be returned
*/
void f_div(stack_t **head, unsigned int counter)
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
        fprintf(stderr, "L%d: Cannot div, the stack is too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    hh = *head;
    if (hh->n == 0 )
    {
        fprintf(stderr, "L%d: Divise by nul\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
   aux = hh->next->n / hh->n;
    hh->next->n = aux;
    *head = hh->next;
    free(hh);
}
