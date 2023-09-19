#ifndef MAIN_H
#define MAIN_H
/* Define Libs */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _myputchar(char ch);
int _putstring(char *str);
void _my_putint(int n);
int _num_length(int n);
int _print_binary(unsigned int n);
int _check_arg(char ch, va_list args);
#endif
