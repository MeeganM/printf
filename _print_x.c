#include "main.h"

/**
 *_print_s - Function that prints a string.
 *@s: String that will be printed.
 *Return: Char quantity.
 **/
int _print_s(va_list s)
{
	int counter = 0;

	char *string;

	string = va_arg(s, char *);

	if (string == NULL)
		string = "(null)";

	while (string[counter] != '\0')
	{
		_putchar(string[counter]);
		counter++;
	}

	return (counter);
}
