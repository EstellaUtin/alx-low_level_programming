#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);
int _putchar(char c);

typedef struct checker
{
	char *type;
	void (*f)();
} checker;

#endif