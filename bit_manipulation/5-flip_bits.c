#include "main.h"
/**
  *flip_bits - function that returns the number of bits
  *@n: parameters
  *@m: parameters
  *Return: numbers bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
