#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: (0)
 */
int main(void)
{
	int n, lt;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
		for (lt = 97; lt <= 102; lt++)
		{
			putchar(lt);
		}

	putchar('\n');
	return (0);
}
