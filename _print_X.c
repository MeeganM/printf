#include "main.h"

/**
 *_print_X - Function that prints a number in Upper case Hexa.
 *@X: Number that will be printed in Upper case Hexa.
 *Return: Char quantity.
 **/
int _print_X(va_list X)
{
	return (_print_hexa(va_arg(X, unsigned int), 1));
}

