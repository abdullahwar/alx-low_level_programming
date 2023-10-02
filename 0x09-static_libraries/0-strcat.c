#include "main.h"

/**
 * _strcat - Function to combine two strings
 * @dest: The destination string
 * @src: The source string
 *
 * This function concatenates the source string onto the end of the destination string.
 * It does not return a value.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

