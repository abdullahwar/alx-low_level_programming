#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function to find the first occurrence of a character in a string
 * @s: The input string to search in
 * @c: The character to find
 *
 * This function searches for the first occurrence of the character 'c' in the string 's'.
 *
 * Return: Pointer to the first occurrence of 'c' in 's', or NULL if 'c' is not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

