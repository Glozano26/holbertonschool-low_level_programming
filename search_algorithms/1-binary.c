#include "search_algos.h"
/**
  *binary_search - function that searches for a value in an array
  *@array: pointer to array
  *@size: size
  *@value: value index
  *Return: index
  */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
