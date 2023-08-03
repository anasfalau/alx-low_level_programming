/*
 * filename:	0-puts_recursion.c
 * Auth:	Anas Ibrahim
 */

/**
 * _puts_recursion - function
 * @s: str arg
 * Description:	prints a string, followed by a new line
 * Return:	(0) exit success code
 */

#include "main.h"

void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[n]);
	_puts_recursion(s + 1);
}

