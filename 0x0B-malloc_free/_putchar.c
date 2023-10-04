#include "main.h"
#include <unistd.h>

/**
 * _putchar - outputs the character 'c' to the standard output (stdout)
 * @c: The character to be displayed
 *
 * Returns: If successful, it returns 1.
 * If an error occurs, it returns -1, and sets the appropriate error code in errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


