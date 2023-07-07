#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)

			printf("FizzBuzz ");

		else if (n % 3 == 0)

			printf("Fizz ");

		else if (n % 5 == 0)

			if (n == 100)
				printf("Buzz");
			else
				printf("Buzz ");

		else

			printf("%d ", n);

	}
	printf("\n");

	return (0);
}
