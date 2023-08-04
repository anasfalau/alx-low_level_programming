/*
 * File: 1-print_rev_recursion.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * _print_rev_recursion - function to print rev recursion
 * @s: str arg
 * Discription: function to print rev recursion
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
