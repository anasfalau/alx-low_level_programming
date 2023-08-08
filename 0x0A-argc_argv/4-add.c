/*
 * file: 4-add.c
 * Auth: Anas Ibrahim
 */

/**
 * main - function
 * Description: A program that adds positive numbers
 * @argc: argument count
 * @argv: arg vector
 * Return: Always (0)
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i;
	long result = 0, num;
	char *endptr;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; ++i)
	{
		num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		result += num;
	}
	printf("%ld\n", result);
	return (0);
}
