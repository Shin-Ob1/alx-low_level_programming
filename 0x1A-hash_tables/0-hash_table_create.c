#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 *
 * Return: If an error occurs - NULL
 *         Otherwise - a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;
	unsigned long int i;

	/* allocate space for the hash table */
	h_t = malloc(sizeof(h_t));

	if (h_t == NULL)
		return (NULL);

	h_t->size = size;
	h_t->array = malloc(sizeof(hash_node_t *) * size);

	if (h_t->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		h_t->array[i] = NULL;
	}

	return (h_t);
}
