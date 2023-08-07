/*
* File: 0-isupper.c
* Auth: Anas Ibrahim
*/

#include "main.h"

/**
* _isupper -  function
* Discription: Program to checks for uppercase
* @c: character input to be checked
* Return: 0 on success
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
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
