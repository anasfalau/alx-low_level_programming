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

int main(int argc, char  *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(argv[i][0]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
