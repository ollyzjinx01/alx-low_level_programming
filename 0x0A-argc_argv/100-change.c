#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the min number of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Return: 1 if error, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int num, j, result;

	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= cents[j])
		{
			result++;
			num -= cents[j];
		}
	}
	printf("%d\n", result);
	return (0);
}

