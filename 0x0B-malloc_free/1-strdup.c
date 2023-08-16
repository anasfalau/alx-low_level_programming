/*
 * file: 1-strdup.c
 * Auth: Anas Ibrahim
 */

#include "main.h"
#include <stdlib.h>

/**
 * _str_len - function that calculate  str len
 * Description: A program that returns a str len
 * @s: arg
 * Return:  (0) on success
 */

int _str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strdup - function that duplicate str
 * Description: A program thatreturns a pointer to a newly
 *		allocated space in memory, which contains a
 *		copy of the string given as a parameter.
 * @str: arg
 * Return:  (0) on success
 */

char *_strdup(char *str)
{
	int i = 0;
	char *str_dup;

	if (str == NULL)
		return (NULL);
	str_dup = malloc(sizeof(*str) * (_str_len(str) + 1));
	if (str_dup == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str_dup[i] = str[i];
		i++;
	}

	return (str_dup);
}
