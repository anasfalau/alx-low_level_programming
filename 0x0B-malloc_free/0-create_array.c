/*
 * file: 0-create_array.c
 * Auth: Anas Ibrahim
 */

/**
 * create_array - function that creates an array of chars,
 *		and initializes it with a specific char.
 * Description: A program that creates an array followed by a new line.
 * @size: arg
 * @c: arg
 * Return: Always (0)
 */

#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *c_add;

	c_add = malloc(4 * size);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		c_add[i] = c;
		i++;
	}
	return (c_add);

}
