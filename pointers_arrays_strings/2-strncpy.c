#include "main.h"
#include <stdio.h>
/**
 * _strncpy - function that copies a string
 * @dest: La cadena de destino
 * @src: La cadena fuente
 * @n: El número máximo de bytes a copiar de src
 * Return: Puntero a la cadena de destino resultante
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest;

	while (*src && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (tmp);
}
