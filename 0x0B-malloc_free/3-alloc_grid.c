#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that creates a dimensional array
 * @width: takes an int as the width of the function
 * @height: takes an int as the height of the function
 * Return: returns a pointer to the 2-d array
*/
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
return (grid);
}
