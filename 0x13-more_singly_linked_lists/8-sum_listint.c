#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - Returns the sum of all the data (n)
  * of a listint_t linked list
  * @head: Pointer to the head of the list
  *
  * Return: Sum of the data of all the nodes in the list,
  * or 0 if the list is empty
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
