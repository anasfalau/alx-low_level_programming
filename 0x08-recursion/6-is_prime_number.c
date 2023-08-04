/*
 * File: 6-is_prime_number.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * check_divisor- Helper function Print
 * @n: The number to return prime or not.
 * @divisor: Divisor arg
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int check_divisor(int n, int divisor)
{
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (check_divisor(n, divisor + 1));
}


/**
 * is_prime_number- Print whether or not a number is Prime
 * @n: The number to return prime or not.
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{

	if (n <= 1)
	{
		return (0);
	}
	return (check_divisor(n, 2));
}
