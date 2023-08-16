/*
 * file: 1-strdup.c
 * Auth: Anas Ibrahim
 */

/**
 * _strdup - function that duplicate str
 * Description: A program thatreturns a pointer to a newly
 *		allocated space in memory, which contains a
 *		copy of the string given as a parameter.
 * @str: arg
 * Return:  (0) on success
 */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

char *_strdup(char *str)
{
	int i = 0;
	char *str_dup = malloc(sizeof(*str) * _str_len(str));

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str_dup[i] = str[i];
		i++;
	}

	return (str_dup);
}
