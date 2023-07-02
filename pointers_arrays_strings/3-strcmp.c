#include "main.h"
/**
 * _strcmp - return zero if is iqual
 * @s1: string 1
 * @s2: string 2
 * Return: the result of s1 - s2 in ASCII
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
