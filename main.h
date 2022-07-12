#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h> /*This library includes va_list and macros*/
#include <stddef.h>
/**
 *struct printer - Struct used to print different types.
 *@type: Data type to print.
 *@func: Function to print;
 **/
typedef struct printer
{
	char *type;
	int (*func)(va_list);
} printer_t;

int _putchar(char);
int _printf(const char *format, ...);
int _print_c(va_list c);
int _print_s(va_list s);
int _print_i(va_list i);
int _print_d(va_list d);
int _print_r(va_list r);
int _print_S(va_list S);
int _print_R(va_list R);
int _print_b(va_list b);
int _print_x(va_list x);
int _print_X(va_list X);
int _print_o(va_list o);
int _print_u(va_list u);
int _print_p(va_list p);

/*Function to print hexa*/
int _print_hexa(unsigned int n, int c);
/*Function to print hexa*/
int _print_hexa_aux(unsigned long num_d);
#endif
