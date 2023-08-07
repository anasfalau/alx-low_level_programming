/*
 * file: 0-whatsmyname.c
 * Auth: Anas Ibrahim
 */

/**
 * main - function
 * Description: A program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arg vector
 * Return: Always (0)
 */

#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}

