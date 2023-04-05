#include "lists.h"

/**
* add_nodeint - adds a node to the beginning of a linked list
* @head: pointer to the head of the list
* @n: integer to be used as content
* Return: address of the newly added node
*/


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));


	if (new_node != 0)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (0);


	if (*head != 0)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
