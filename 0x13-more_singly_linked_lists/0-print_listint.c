#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @b : linked list of type listint_t to print
 *
 * Description : singly linked list node structure
 * Return : number of nodes
 */
size_t print_listint(Constlistint_t *b)
{
	size_t num = 0;

	while (b != null)
	{
		printf("%d/n", b->n)
			num++;
		b = b->next;
	}
	return (num);
}

