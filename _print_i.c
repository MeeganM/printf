#include "main.h"

/**
 *_print_i - Function that prints an integer.
 *@i: Int that will be printed.
 *Return: Char quantity.
 **/
int _print_i(va_list i)
{
	int x, dc = 1, counter = 0;
	unsigned int num;

	x = va_arg(i, int);

	if (x < 0)
	{
		counter += _putchar('-');
		num = x * -1;
	}

	else
	{
		num = x;
	}

	while (num / dc > 9)
		dc = dc * 10;

	while (dc != 0)
	{
		counter += _putchar((num / dc) + '0');
		num = num % dc;
		dc = dc / 10;
	}
	return (counter);
}
