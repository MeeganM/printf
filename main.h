#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /*This is the library that include va_list and macros*/
#include <stdlib.h>
#include <stddef.h>

/**
 * struct print - Struct used to print different types(t).
 * @t: Data type to print.
 * @f: Function to print;
 */

typedef struct print
{
	char *t;
	int (*f)(va_list);
}print_t;

int _putchar(char);
int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_d(va_list d);
int print_i(va_list i);
int print_b(va_list b);
int print_u(va_list u);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

/*Function to print hexa*/
int _print_hexa(unsigned int n, int c);
/*Function to print hexa*/
int _print_hexa_aux(unsigned long num_d);

#endif
