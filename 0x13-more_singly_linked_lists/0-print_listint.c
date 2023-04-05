#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h : linked list of type listint_t to print
 *
 * Description : singly linked list node structure
 * Return : number of nodes
 */
size_t print_listint(Constlistint_t *h)
{
	size_t n = 0;

	while (h !=)
	{
		printf("%d/n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

