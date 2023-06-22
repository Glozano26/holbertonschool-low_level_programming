#include "main.h"
/**
 *  main - Learn your times table -prints the 9 times table
 *  Descripcion: times table
 *  Return: Always 0
 */
void times_table(void)
{
	int fila, columna, producto, cociente, residuo;

	for (fila = 0; fila <= 9; fila++)
	{
		for (columna = 0; columna <= 9; columna++)
		{
			producto = fila * columna;
			cociente = producto / 10;
			residuo = producto % 10;

			if (columna == 0)
			{
				_putchar('0');
			}
			else if (producto < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(residuo + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(cociente + '0');
				_putchar(residuo + '0');
			}
		}
		_putchar('\n');
	}

}
