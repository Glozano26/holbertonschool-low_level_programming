#include "function_pointers.h"
#include <stddef.h>
/**
  *array_iterator - funtion pointer
  *@array: array to print
  *@size: size of array
  *@action: pointer to use
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
