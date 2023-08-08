/*
 * file: 3-mul.c
 * Auth: Anas Ibrahim
 */

/**
 * main - function
 * Description: A program thatmultiplies two numbers
 * @argc: argument count
 * @argv: arg vector
 * Return: Always (0)
 */

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int mul;
	if(argc > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

