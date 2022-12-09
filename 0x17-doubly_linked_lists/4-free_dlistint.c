#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the list to free
 */
void free_dlistint(dlistint *head)
{
	dlistint *temp;
	while(head)
	{
	temp = head->next;
	free(head)
	head = temp;
	}	
}
