#include "main.h"

/**
 *_print_u - prints and counts
 *@u: arg list
 *Return: counter
 **/
int _print_u(va_list u)
{
	unsigned int array[10];
	unsigned int max = 1000000000;/*(10 ^ 9)*/
	unsigned int i, x = 0, num;
	int counter = 0;

	num = va_arg(u, unsigned int);

	array[0] = num / max;
	i = 1;
	while (i < 10)
	{
		max /= 10;
		array[i] = (num / max) % 10;
		i++;
	}
	i = 0;
	while (i < 10)
	{
		x += array[i];

		if (x != 0 || i == 9)
		{
			_putchar(array[i] + '0');
			counter++;
		}
		i++;
	}
	return (counter);
}
