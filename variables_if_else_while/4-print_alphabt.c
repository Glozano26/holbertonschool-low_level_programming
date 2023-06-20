#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: (0)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha != 'e' && alpha != 'q')
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');

	return (0);
}
