/*
 * File: 0-strcat.c
 * Auth: Anas Ibrahim
 */

#include "main.h"

/**
 * _strcat- function to concatenate 2 string
 * @src: source string pointer arg
 * @dest: destination stringpointer arg
 * discription: A function that concatenates 2 string pointed to
 *		by src, including the terminating null byte (\0),
 *		to the buffer pointed to by dest.
 * Return: String at destination.
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest[dest_len + i] == '\0')
		dest[dest_len + i] = '\0';
	return (dest);
}
