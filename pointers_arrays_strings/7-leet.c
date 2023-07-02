#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 * Return: address of s
 */
char *leet(char *str)
{
	int x, y;
	char leet[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (x = 0; *(str + x); x++)
	{
		for (y = 0; y <= 7; y++)
		{
			if (leet[y] == str[x])
				str[x] = num[y];
		}
	}
	return (str);
}
