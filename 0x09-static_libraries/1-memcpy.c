#include "main.h"

/**
 * _memcpy - Function to copy a memory area
 * @dest: Destination memory where the data will be stored
 * @src: Source memory from which data will be copied
 * @n: Number of bytes to copy
 *
 * This function copies 'n' bytes of data from 'src' to 'dest'.
 *
 * Return: Pointer to the destination memory with 'n' bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

