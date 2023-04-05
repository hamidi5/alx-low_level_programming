#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of chrc to lunhc s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y, f, that;

	f = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		that = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				f++;
				that = 1;
			}
		}
		if (that == 0)
		{
			return (f);
		}
	}

	return (0);
}
