#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatena dos cadenas de caracteres
 * @dest: La cadena de destino
 * @src: La cadena fuente
 * @n: El número máximo de bytes a concatenar de src
 * Return: Puntero a la cadena de destino resultante
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';

	return (dest);
}
