#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: single letter input
 * Return: Always 0.
 */
int _isupper(int c)
{
	int alp;

	if (alp >= 'A' && alp <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
