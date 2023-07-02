#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase of string to uppercase
 * @s: string array
 *  Return: the result
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	return (str);
}
