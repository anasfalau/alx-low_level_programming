/*
 * File: 9-strcpy.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * _strcpy- function to copy string
 * @src: source pointer arg
 * @dest: destination pointer arg
 * discription: A function that copies the string pointed to
 *		by src, including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 * Return: String at destination.
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
		if (i == len)
			dest[i] = '\0';
	}

	return (dest);
}
