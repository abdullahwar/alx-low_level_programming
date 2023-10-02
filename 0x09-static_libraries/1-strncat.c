#include "main.h"

/**
 * _strncat - Function to concatenate two strings using at most 'n' bytes from 'src'
 * @dest: Destination string where the result will be stored
 * @src: Source string to be concatenated
 * @n: Maximum number of bytes to append from 'src'
 *
 * This function concatenates 'n' bytes from 'src' onto the end of 'dest'.
 *
 * Return: Pointer to 'dest' after the concatenation
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}

