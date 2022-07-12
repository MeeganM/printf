#include "main.h"

/**
 *_print_c - Function that prints a char.
 *@c: Char that will be printed.
 *Return: Char quantity (Always 1).
 **/
int _print_c(va_list c)
{
        char character;

        character = va_arg(c, int);

        _putchar(character);

        return (1);
}
