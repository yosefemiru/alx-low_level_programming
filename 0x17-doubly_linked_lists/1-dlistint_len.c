#include "lists.h"
/**
 * dlistint_len - counts and returns number of elements of a dlistint_t list.
 * @h: pointer to head of the list
 * Return: number of nodes in the list
 **/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
