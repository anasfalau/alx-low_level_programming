/*
 * File: 0-puts_recursion.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * _puts_helper - function to print str
 * @s: str pointer arg
 * @index: index arg
 * Discription: A function that help _put_recursion
 */

void _puts_helper(char *s, int index)
{
	if (s[index] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[index]);
	_puts_helper(s, index + 1);
}

/**
 * _puts_recursion - function to help recursion
 * @s: str arg
 * Discription: function to help recursion
 */

void _puts_recursion(char *s)
{
	_puts_helper(s, 0);
}
