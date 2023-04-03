#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - Deletes the head node of a listint_t linked list
  * and returns its data
  * @head: Pointer to a pointer to the head of the list
  *
  * Return: data of the deleted head node, or 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *temp_head;
	int n = 0;

	if (*head != NULL)
	{
		temp_head = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = temp_head;
	}

	return (n);
}
