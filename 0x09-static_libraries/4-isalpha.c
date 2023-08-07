/*
* File: 4-isalpha.c
* Auth: Anas Ibrahim
*/

#include "main.h"

/**
* _isalpha -  function
* Discription: Program to checks for lowercase
* @c: character input to be checked to be is a letter,
* lowercase or uppercase
* Return: 1 on success, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		c = 1;
		return (c);
	}
	else
	{
		c = 0;
		return (c);
	}
}
