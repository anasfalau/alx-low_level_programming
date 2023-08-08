/*
 * file: 2-args.c
 * Auth: Anas Ibrahim
 */

/**
 * main - function
 * Description: A program that prints all arguments it receives
 * @argc: argument count
 * @argv: arg vector
 * Return: Always (0)
 */

#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}

