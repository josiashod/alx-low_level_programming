#include "variadic_functions.h"

/**
 * print_int - function that print int
 * @arg: va_list to print
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_char - function that print char
 * @arg: va_list to print
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_float - function that print float
 * @arg: va_list to print
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - function that print string
 * @arg: va_list to print
 */
void print_string(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed
 * to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	printargs printargs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	va_list ap;
	char *separator = "";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != *(printargs[j].format))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			printargs[j].print(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
