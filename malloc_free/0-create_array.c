#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char to inicialize array with
 * Return: NULL if size = 0.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
