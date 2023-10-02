#include "main.h"
/**
 * _memset - Fills a block of memory with a specified value
 * @s: Starting address of the memory to be filled
 * @b: The desired value to fill with
 * @n: Number of bytes to be changed
 *
 * Return: A modified array with the new value for 'n' bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

