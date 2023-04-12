#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create  array of chars,
 * and initializ it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *b = malloc(size)


	if (size = 0 || b = 0)

	return (0);

	while (size--)
		b [size] = c;
	return (b);
		
}
