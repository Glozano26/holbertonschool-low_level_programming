#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - función que libere una cuadrícula bidimensional
 * @height: rows
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	free(grid);
}
