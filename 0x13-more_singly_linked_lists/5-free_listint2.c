#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - Frees a listint_t list and sets the head to NULL.
  * @head: Pointer to a pointer to the head of the list
  *
  * Return: ...
  */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head)
	{
		while (*head)
		{
			temp_node = (*head);
			*head = (*head)->next;
			free(temp_node);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = NULL;
}
