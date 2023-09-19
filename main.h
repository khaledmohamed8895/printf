#ifndef MAIN_H
#define MAIN_H
/* Define Libs */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char ch);
int _putstring(char *str);
int _check_arg(char ch, va_list args);
#endif
