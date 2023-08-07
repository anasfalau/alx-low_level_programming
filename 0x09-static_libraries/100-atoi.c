/*
 * File: 100-atoi.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * _atoi- function to convert string to integer.
 * @s: string pointer arg
 * Description: A function that converts string to integer
 * Return: int.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}

