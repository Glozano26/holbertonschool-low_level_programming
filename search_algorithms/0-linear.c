#include "search_algos.h"
/**
  *linear_search - function that searches for a value in an array
  *@array: pointer to array
  *@size: size
  *@value: value index
  *Return: index
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
