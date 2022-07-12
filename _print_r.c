#include "main.h"

/**
 *_print_r - Function that prints a reversed string.
 *@r: String that will be reversed and printed.
 *Return: Char quantity.
 **/
int _print_r(va_list r)
{
	char *string;
	int i = 0, counter = 0;

	string = va_arg(r, char *);

	if (string == NULL)
		string = "";

	while (string[i] != '\0')
		i++;

	for (i -= 1; i >= 0; i--)
	{
		_putchar(string[i]);
		counter++;
	}
	return (counter);
}
