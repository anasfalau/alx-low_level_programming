/*
 * File: 3-factorial.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * factorial - function for factorial
 * @n: number arg
 * Discription: function to calculate the factorial of a number
 * Return: factorial of the number
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
