#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


typedef struct variables{
	char *ptr;
	void (*function)(va_list argts);
	} type_var;

/**
 * p_char - print char
 * @argts: list of arguments
 */
void p_char(va_list argts)
{
	printf("%c", va_arg(argts, int));
}
/**
 * p_int - print int
 * @argts: list of arguments
 */
void p_int(va_list argts)
{
	printf("%d", va_arg(argts, int));
}
/**
 * p_float - print float
 * @argts: list of arguments
 */
void p_float(va_list argts)
{
	printf("%f", va_arg(argts, double));
}
/**
 * p_str - print string
 * @argts: list of arguments
 */
void p_str(va_list argts)
{
	char *str = va_arg(argts, char *);

	if (str == NULL)
	{
	printf("(nil)");
	return;
	}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * @argts: arguments array
 */
void print_all(const char * const format, ...)
{
	int i = 0, x;
	char *esp = "", *coma = ", ";
	va_list argts;

	type_var variables[] = {
	{"c", p_char},
	{"i", p_int},
	{"f", p_float},
	{"s", p_str},
	{'\0', NULL}
	};

	va_start(argts, format);

	while (format != NULL && format[i] != '\0')
	{
	x = 0;
		while (*(variables[x].ptr) != '\0')
		{
			if (*(variables[x].ptr) == format[i])
			{
				printf("%s", esp);
				variables[x].function(argts);
				esp = coma;
			}
			x++;
		}
		i++;
	}
	printf("\n");
	va_end(argts);
}
