#include "lists.h"
/**
 * sum_dlistint - show us the sum of all the data (n) in a DLL
 * @head: a pointer to the head of the DLL
 * Return: the sum of all data of the DLL or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int add_num = 0;

	while (head != NULL)
	{
		add_num += head->n;
		head = head->next;
	}
	return (add_num);
}
