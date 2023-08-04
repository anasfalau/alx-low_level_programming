/*
 * File: 4-pow_recursion.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * _pow_recursion - power function
 * @x: base number arg
 * @y: power number arg
 * Discription: function that returns the value of x raised to the power of y.
 * Return: powered num or -1 If y is lower than 0, the function
 *	   should return -1
 */

int  _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
