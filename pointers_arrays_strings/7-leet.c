#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: address of s
 */
char *leet(char *str)
{
	int i;

	while (str[i])
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		else if (str[i] =='e' || str[i] == 'E')
			str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		i++;
	}
	return (str);
}
