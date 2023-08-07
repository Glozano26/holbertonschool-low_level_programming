#include "main.h"
/**
  * set_bit - function that sets the value of a bit
  *@index: bit arguments
  *@n: pointer
  *Return: 1 if it worked, or -1 if and error ocurred
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bitmask = 1;

	*n = *n | (bitmask << index);

	return (1);
}

