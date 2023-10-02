#include "main.h"
/**
 * _puts - Function to print a string followed by a newline to the standard output
 * @str: The string to be printed
 *
 * This function prints the string 'str' to the standard output (stdout) followed by a newline character.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

