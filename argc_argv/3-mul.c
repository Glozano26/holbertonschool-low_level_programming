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
	if (argv != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = argv(atoi[1]);
	y = argv(atoi[2]);
	r = x * y;
	printf("%d\n", r);
	return (0);
}
