#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: string dest
 * @src: string
 * Return: resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0;

	while (*dest != '\0')
	{
		dest++;
		len1++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
		len1++;
	}
	*(dest + 1) = '\0';
	dest = dest - len1;

	return (dest);
}
