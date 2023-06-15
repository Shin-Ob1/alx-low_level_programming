#include "lists.h"
/**
 * dlistint_len - show us the number of elements
 * @h: a pointer to the head of the list
 * Return: the number of elements in a
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_elements;

	num_elements = 0;
	while (h)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
