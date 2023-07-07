#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: count
 * @argv: lenght string
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int x, y, r;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	r = x * y;
	printf("%d\n", r);
	return (0);
}
