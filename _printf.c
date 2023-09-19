#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: the format string with specifier
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, ln = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			ln += _putchar(format[i]);
			continue;
		}
		if (i++ == strlen(format) - 1)
			return (-1);
		ln += _check_arg(format[i], args);
	}

	va_end(args);
	return (ln);
}
