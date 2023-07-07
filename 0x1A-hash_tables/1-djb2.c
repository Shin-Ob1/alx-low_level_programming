#include "hash_tables.h"

/**
 * hash_djb2 - hash function djb2 style
 * @str: key value
 *
 * Description: compute index with djb2 algorithm
 * Return: hash code
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int c;

	hsh = 5381;
	while ((c = *str++))
	{
		hsh = ((hsh << 5) + hsh) + c; /* hsh * 33 + c */
	}
	return (hsh);
}
