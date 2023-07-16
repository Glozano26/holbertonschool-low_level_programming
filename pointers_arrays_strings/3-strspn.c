#include <stdio.h>
#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer
 * @accept: character accepted
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, i;

	while (*s != '\0')
	{
		int count = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count = 1; /*si hay coincidencia True*/
				break; /*cuando no se encuentra el caracter en accept*/
			}
		}
		if (count == 0) /*si no hubo coincidencia (false 0)*/
		{
			break; /*rompe el while*/
		}
		len++;
		s++;
	}
	return (len);
}

