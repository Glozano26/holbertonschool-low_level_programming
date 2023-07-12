#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - función que libere una cuadrícula bidimensional
 * @grid: puntero
 * @height: rows
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
