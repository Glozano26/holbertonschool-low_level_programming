#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input char
 * @s2: input char
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int t, x, i = 0, c = 0;
	char *conca;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1 != NULL && s1[i] != '\0')
	{
		i++;
	}
	while (s2 != NULL && s2[c] != '\0')
	{
		c++;
	}
	conca = malloc(sizeof(char) * (i + c + 1));

	if (conca == NULL)
		return (NULL);

	for (t = 0; t < i; t++)
	{
		conca[t] = s1[t];
	}
	x = 0;
	while (t < (i + c))
	{
		conca[t] = s2[x];
		t++;
		x++;
	}
	conca[t] = '\0';
	return (conca);
}
