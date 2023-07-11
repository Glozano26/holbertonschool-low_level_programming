#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * @str: pointer
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int len = 0;
	char *copy_string;

	if (str == NULL)
		return (NULL);
	else
	{
		for (len = 0; str[len] != '\0'; len++)

		copy_string = malloc((sizeof(char) * len) + 1);
		len = 0;

		while (str[len] != '\0')
		{
			copy_string[len] = str[len];
			len++;
		}
	copy_string[len] = '\0';
	return (copy_string);
	}
}
