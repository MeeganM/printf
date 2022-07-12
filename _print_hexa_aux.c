#include "main.h"

/**
 *_print_hexa_aux - Function that prints a number in Hexa.
 *@n: Number that will be printed in Hexa.
 *Return: Char quantity.
 **/
int _print_hexa_aux(unsigned long n)
{
	int i = 0, counter = 0, rest;
	char hexas[100];

	if (n == 0)
	{

		_putchar('0');
		return (1);
	}

	while (n != 0)
	{
		rest = n % 16;
		if (rest < 10)
			rest = rest + 48;
		else
			rest = rest + 87;

		hexas[i] = rest;
		i++;
		n = n / 16;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hexas[i]);
		counter++;
	}
	return (counter);
}

