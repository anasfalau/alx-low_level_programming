/*
 * file: 2-str_concat.c
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
 * str_concat - function that concat 2 strings
 * Description: A program that returns a pointer to a newly
 *		allocated space in memory, which contains a
 *		concat 2 of the  string given as a parameter.
 * @s1: arg
 * @s2: arg
 * Return:  (0) on success
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len_1 = _str_len(s1);
	int len_2 = _str_len(s2);
	char *str_concat;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	str_concat = malloc(sizeof(*s1) * (len_1 + len_2) + 1);
	if (str_concat == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str_concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str_concat[len_1 + j] = s2[j];
		j++;
	}
	return (str_concat);
}
