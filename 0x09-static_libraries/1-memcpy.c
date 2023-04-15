#include "main.h"

/**
 * *_memcpy - copie memory area
 * @dest: destination memory area
 * @src: memory area to copy from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ix;

	for (ix = 0; ix < n; ix++)
	{
		dest[ix] = src[ix];
	}

	return (dest);
}
