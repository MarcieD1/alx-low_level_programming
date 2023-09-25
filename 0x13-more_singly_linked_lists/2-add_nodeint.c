#include "lists.h"

/**
 * add_nodeint - a new node is added at the start of a node
 * @head: pointer is to the first node in the list
 * @n: data inserts that new node
 *
 * Return: pointer is to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}
