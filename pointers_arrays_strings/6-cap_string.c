#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalize all word of a string
 * @s: string array
 * Return: string array
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int len = 1;

	while (*ptr != '\0')
	{
		if (len && *ptr >= 'a' && *ptr <= 'z')
		{
				
			*ptr = *ptr - 32;

			if (len && *ptr >= 32 && *ptr <= 47)
			{
				(len = (*ptr == '\t' || *ptr == '\n' ||	*ptr == '?' ||	*ptr == '{' || *ptr == '}'));
			}
		}

	ptr++;
	}
	return (s);
}

