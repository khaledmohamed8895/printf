#include "main.h"

/**
 * _myputchar - function prints a character.
 * @ch: parameter is a character
 * Return: integer number
 */
int _myputchar(char ch)
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
 * _my_putint - print integer
 * @n: number to be printed
 * return : return void
 */
void _my_putint(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_myputchar('-');
	}
	else
		n1 = n;
	if (n1 / 10)
		_my_putint(n1 / 10);
	_myputchar((n1 % 10) + '0');
}

/**
 * _num_length - return the number len
 * @n: number to be printed
 * Return: len.
 */
int _num_length(int n)
{
	int len = 1;

	if (n < 0)
		len++;
	while (n /= 10)
		len++;
	return (len);
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

	switch (ch)
	{
	case 'c':
		len += _myputchar(va_arg(args, int));
		break;
	case 's':
		str = va_arg(args, char *);
		len += _putstring(str ? str : "(null)");
		break;
	case 'd':
	case 'i':
		num = va_arg(args, int);
		_my_putint(num);
		len += _num_length(num);
		break;
	case 'b':
		len += _print_binary(va_arg(args, unsigned int));
		break;
	case '%':
		len += _myputchar('%');
		break;
	default:
		len += _myputchar('%');
		len += _myputchar(ch);
		break;
	}
	return (len);
}
