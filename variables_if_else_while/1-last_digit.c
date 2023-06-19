#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Este programa asignará un número aleatorio a la variable n cada vez que se ejecute
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, n);
	else if (n > 5)
		printf("Last digit of %d and is greater than 5\n", n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d and is less than %d and not 0\n", n, n);
	return (0);
}
