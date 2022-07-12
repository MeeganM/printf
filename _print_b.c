#include "main.h"

/**
 *_print_b - Function that prints a number in Binary.
 *@b: Number that will be printed in Binary.
 *Return: Char quantity.
 **/
int _print_b(va_list b)
{
	unsigned int n, i, sum, array[32]; /*max bits*/
	long int max = 2147483648; /* max number (2 ^ 31) */
	int counter = 0;

	n = va_arg(b, unsigned int);

	array[0] = n / max;

	for (i = 1; i < 32; i++)
	{
		max /= 2;
		array[i] = (n / max) % 2;
	}
	sum = 0, counter = 0;
	for (i = 0; i < 32; i++)
	{
		sum += array[i];

		if (sum || i == 31)
		{
			_putchar('0' + array[i]);
			counter++;
		}
	}
	return (counter);
}
