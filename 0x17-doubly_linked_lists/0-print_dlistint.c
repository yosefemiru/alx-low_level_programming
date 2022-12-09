#include "lists.h"
/**
 * print_dlistint - prints all elements of a
 * doubly linked list.
* @h: pointer to list.
 * Return: number of nodes in the d-list.
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t size;

size = 0;
if (h == NULL)
return (size);




while (h)
{
printf("%d\n", h->n);
size++;
h = h->next;
}


return (size);
}

/*	.include "lists."
