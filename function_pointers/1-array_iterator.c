#include "function_pointers.h"
#include <stdio.h>
/**
  *array_iterator - funtion pointer
  *@array: array
  *@size: tamaño del array
  *@action: funtion
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}
