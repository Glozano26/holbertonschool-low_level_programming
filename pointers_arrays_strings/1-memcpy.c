#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: puntero al destino de la copia
 * @src: puntero al origen de los datos
 * @n: numero de bytes a copiar
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
