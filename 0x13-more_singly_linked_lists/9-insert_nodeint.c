#include "lists.h"

/**
 * insert_nodeint_at_index - retrieve a new node in a linked list,
 * @head: pointer to the first element of the list
 * @idx: node desired position to retrieve
 * @n: data to be stored in the new node
 * Return: pointer to the retrieved node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
listint_t *new_node = malloc(sizeof(listint_t));
listint_t *current = *head;
unsigned int i;

if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; i < idx - 1; i++)
{
if (current == NULL)
{
free(new_node);
return (NULL);
}
current = current->next;

}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}
