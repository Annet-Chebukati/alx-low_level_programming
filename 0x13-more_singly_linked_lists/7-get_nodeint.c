#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - Returns the nth node of a listint_t linked list
  * @head: Pointer to the head of the list
  * @index: Index of the node to return (starting from 0)
  *
  * Return: Pointer to the nth node, or NULL if the node does not exist
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head)
		{
			if (count == index)
				return (head);

			head = head->next;
			count++;
		}
	}

	return (NULL);
}
