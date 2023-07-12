#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - function that allocates memory
 * @b: integer
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int t, x, i = 0, c = 0;
	char *conca;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;
	if (c <= n)
	{
		conca = malloc(sizeof(char) * (i + c + 1));
		if (conca == NULL)
			return (NULL);
		for (t = 0; t < i; t++)
			conca[t] = s1[t];
		x = 0;
		while (t < (i + c))
		{
			conca[t] = s2[x];
			t++;
			x++;
		}
		conca[t] = '\0';
	}
	else
	{
		conca = malloc(sizeof(char) * (i + n + 1));
		if (conca == NULL)
			return (NULL);
		for (t = 0; t < i; t++)
			conca[t] = s1[t];
		x = 0;
		while (t < (i + n))
		{
			conca[t] = s2[x];
			t++;
			x++;
		}
		conca[t] = '\0';
	}
	return (conca);
}
