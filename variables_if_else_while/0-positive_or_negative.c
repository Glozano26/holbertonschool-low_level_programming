#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determinar si el numero es positivo o negativo
 * Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);

	else if (n < 0)

		printf("%d is negative\n", n);

	else if (n == 0)

		printf("is zero");

	return (0);
}
