#include "main.h"

/**
 * _strlen - Function to calculate the length of a string
 * @s: The input string
 *
 * This function computes and returns the length of the string 's'.
 *
 * Return: The length of the string 's'
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}



