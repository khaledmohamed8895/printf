#include "main.h"

/**
 * _putchar - function prints a character.
 * @ch: parameter is a character
 * Return: integer number
 */
int _putchar(char ch)
{
    return (write(1, &ch, 1));
}

/**
 * _putstring - print the string.
 * @str: parameter is string
 * Return: length of the string.
 */
int _putstring(char *str)
{
    return (write(1, str, strlen(str)));
}

/**
 * _check_arg - print argument
 * @ch: the string format
 * @args: the variable arguments
 * Return: length.
 */
int _check_arg(char ch, va_list args)
{
    int num, len = 0;
    char *str;
    if (ch == 'c')
    {
        len += _putchar(va_arg(args, int));
    }
    else if (ch == 's')
    {
        str = va_arg(args, char *);
        len += _putstring(STRING);
    }
    else if (ch == '%')
    {
        len += _putchar('%');
    }
    else
    {
        len += _putchar('%');
        len += _putchar(ch);
    }

    return (len);
}