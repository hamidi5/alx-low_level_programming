#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print the minimum number of coin to
 * make change for  amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int dig, y, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	dig = atoi(argv[1]);
	result = 0;

	if (dig < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && dig >= 0; y++)
	{
		while (dig >= coins[y])
		{
			result++;
			dig -= coins[y];
		}
	}

	printf("%d\n", result);
	return (0);
}
