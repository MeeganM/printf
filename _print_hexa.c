#include "main.h"

/**
 *_print_hexa - Function that prints a number in Hexa.
 *@n: Number that will be printed in Hexa.
 *@c: This variable set the case of the output (0 =LowerCase and 1 =UpperCase).
 *Return: Char quantity.
 **/
int _print_hexa(unsigned int n, int c)
{
	unsigned int a[8], sum = 0;
	int counter = 0, i = 0;
	int m = 268435456; /* (16 ^ 7) */
	char rest;

	if (c == 0)
		rest = 39; /*Rest of ASCII value of 'a' and ':'*/
	else
		rest = 7; /*Rest of ASCII value of 'A' and ':'*/

	a[0] = n / m;

	i = 1;
	while (i < 8)
	{
		m /= 16;
		a[i] = (n / m) % 16;
		i++;
	}

	i = 0, sum = 0, counter = 0;
	while (i < 8)
	{
		sum += a[i];
		if (sum || i == 7)
		{
			if (a[i] < 10)
				_putchar(a[i] + '0');
			else
				_putchar(rest + a[i] + '0');
			counter++;
		}

		i++;
	}
	return (counter);
}
