#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer.
 * @s: the value to intenger
 * Return: string intenger
 */
int _atoi(char *s)
{
	int signo = 1;
	unsigned int num = 0;
	int digito = 0;

	while (*s)
	{
		if (*s == '-')
		{
			signo *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num = (num * 10) + (*s <= '9')
			digito = 1;
		}
		else if (digito)
		{
			break;
		}
		s++;
	}
	return (num * signo);
}
