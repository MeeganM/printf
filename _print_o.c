#include "main.h"

/**
 *_print_o - Function that prints a number in Octal.
 *@o: Number that will be printed in Octal.
 *Return: Char quantity.
 **/
int _print_o(va_list o)
{
	unsigned int n, i, sum, array[11]; /*max bits*/
	unsigned int max = 1073741824; /*max number (8 ^ 10)*/
	int counter = 0;

	n = va_arg(o, unsigned int);

	array[0] = n / max;

	for (i = 1; i < 11; i++)
	{
		max /= 8;
		array[i] = (n / max) % 8;
	}
	sum = 0, counter = 0;
	for (i = 0; i < 11; i++)
	{
		sum += array[i];

		if (sum || i == 10)
		{
			_putchar(array[i] + '0');
			counter++;
		}
	}
	return (counter);
}
