/*
 * File: 2-strlen_recursion.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * _strlen_recursion - function to calculate len of str
 * @s: str arg
 * Discription: function to measure lenght of a string
 * Return: len of str.
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
