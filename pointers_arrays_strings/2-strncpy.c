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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{	
		i++;
	}
	dest[i] = '\0';

	return (dest);
