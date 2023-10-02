#include <unistd.h>
/**
 * _putchar - Outputs the character 'c' to the standard output
 * @c: The character to be printed
 *
 * Return: On success, the function returns 1.
 * On error, it returns -1 and sets the appropriate errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

