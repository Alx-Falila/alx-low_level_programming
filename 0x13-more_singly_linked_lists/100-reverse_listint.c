#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - Reverse a list
 * @head: the head of list
 * Description: this function reverse a singly linked list
 * Return: head of the list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next_node;

	if (*head != NULL)
		{
			previous = NULL;
			next_node = (*head)->next;
			(*head)->next = previous;
			previous = *head;
			while (*head != NULL)
			{
				*head = next_node;
				if (*head != NULL)
				{
					next_node = (*head)->next;
					(*head)->next = previous;
					previous = *head;
					*head = next_node;
				}
			}
			*head = previous;
		}
		return (*head);
}
