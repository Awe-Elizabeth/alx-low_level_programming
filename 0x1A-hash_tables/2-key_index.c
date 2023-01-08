#include <hash_tables.h>

/**
 * key_index - the function for the key index
 * @key: the key
 * @size: the size of the hash table
 * Return: returns the key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
