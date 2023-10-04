#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of the specified size and initializes its elements with the given character 'c'.
 * @size: The size of the array to create.
 * @c: The character to assign to each element.
 *
 * Description: This function creates an array of size 'size' and assigns the character 'c' to each element.
 *
 * Return: A pointer to the created array, or NULL if the allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

