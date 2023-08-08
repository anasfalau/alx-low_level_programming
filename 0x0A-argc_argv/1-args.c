/*
 * file: 1-args.c
 * Auth: Anas Ibrahim
 */

/**
 * main - function
 * Description: A program that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: arg vector
 * Return: Always (0)
 */

#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", (argc - 1));

	return (0);
}

