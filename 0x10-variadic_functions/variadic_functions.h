#ifndef VARIADIC_FUCNTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int _putchar(int c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
