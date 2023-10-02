#include "main.h"

/**
 * _islower - Function to check if a character is a lowercase letter
 * @c: The character to be checked
 *
 * This function returns 1 if the character 'c' is a lowercase letter (a-z),
 * otherwise, it returns 0.
 *
 * Return: 1 if 'c' is a lowercase letter, 0 otherwise.
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

