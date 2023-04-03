#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: The head of the linked list
  * @n: The value to add to the new node
  *
  * Return: The address of the new element, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptrnew_node;

	ptrnew_node = malloc(sizeof(listint_t));
	if (ptrnew_node == NULL)
		return (NULL);

	ptrnew_node->n = n;
	ptrnew_node->next = *head;
	*head = ptrnew_node;

	return (ptrnew_node);
}
