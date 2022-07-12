#include "main.h"

/**
 *_print_s - Function that prints a string.
 *@s: String that will be printed.
 *Return: Character quantity.
 **/
int _print_s(va_list s)
{
        int count = 0;

        char *string;

        string = va_arg(s, char *);

        if (string == NULL)
                string = "(null)";

        while (string[count] != '\0')
        {
                _putchar(string[count]);
                count++;
        }

        return (count);
}
