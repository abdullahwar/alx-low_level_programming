#include "main.h"
/**
 * _strncpy - Function to copy a string with a specified maximum length
 * @dest: The destination where the string will be copied
 * @src: The source string to be copied
 * @n: The maximum number of characters to copy from 'src'
 *
 * This function copies up to 'n' characters from 'src' to 'dest'.
 *
 * Return: Pointer to 'dest' after the copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

