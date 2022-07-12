#include "main.h"

/**
 *validation - Verifies if the format is valid.
 *@format: Format.
 *Return: Returns a pointer to a function or to NULL.
 **/
int (*validation(const char *format))(va_list)
{
	int i = 0;

	printer_t op[] = {
		{"c", _print_c},
		{"s", _print_s},
		{"d", _print_d},
		{"i", _print_i},
		{"r", _print_r},
		{"R", _print_R},
		{"u", _print_u},
		{"b", _print_b},
		{"x", _print_x},
		{"X", _print_X},
		{"o", _print_o},
		{"p", _print_p},
		{"S", _print_S},
		{NULL, NULL}
	};

	while (op[i].type != NULL)
	{
		if (*(op[i].type) == *format)
			break;

		i++;
	}
	return (op[i].func);
}

/**
 *_printf - Prints formatted data to stdout.
 *@format: Arguments for the function.
 *Return: Char Quantity.
 **/
int _printf(const char *format, ...)
{
	int i = 0, counter = 0;

	va_list args;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i] != '\0')
		{
			_putchar(format[i]);
			counter++;
			i++;
		}
		if (format[i] == '\0')
			return (counter);
		func = validation(&format[i + 1]);
		if (func != NULL)
		{
			counter += func(args);
			i += 2;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);
		_putchar(format[i]);
		counter++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (counter);
}
