/*
 * file: 3-alloc_grid.c
 * Auth: Anas Ibrahim
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that create  2D Array
 * Description: A function function that returns a pointer
 *		to a 2 dimensional array of integers
 * @width: arg
 * @height: arg
 * Return:  (0) on success
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **grid;

	grid = malloc(sizeof(int) * width);
	if (grid  == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		grid[i] = malloc(sizeof(int) * height);
		if (grid[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
