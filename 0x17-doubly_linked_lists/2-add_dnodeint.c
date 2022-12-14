#include "lists.h"
/**
  * add_dnodeint - adds a new node at beginning of a doubly
  * linked list.
  * @head: double pointer to list
  * @n: new node.
  *
  * Return: address of the new element or NULL.
  */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
