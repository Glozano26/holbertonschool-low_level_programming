#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - function that returns a pointer
 * @width: columns
 * @height: rows
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, c, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix[j];
			}
			free(matrix);
			return (NULL);
		}
		for (c = 0; c < width; c++)
		{
			matrix[i][c] = 0;
		}
	}															return (matrix);

}
