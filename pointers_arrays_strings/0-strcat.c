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
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest);
}
