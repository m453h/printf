#include "main.h"

/**
 * _printf - displays output to screen per specified format
 * @format: a string containing zero or more output format
 * directives
 *
 * Return: (int) - The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int print_count = 0, (*structype)(char *, va_list);
	char q[3];
	va_list pa;

	if (format == NULL)
		return (-1);
	q[2] = '\0';
	va_start(pa, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structype = handler(format);
			if (structype)
			{
				q[0] = '%';
				q[1] = format[1];
				print_count += structype(q, pa);
			}
			else if (format[1] != '\0')
			{
				print_count += _putchar('%');
				print_count += _putchar(format[1]);
			}
			else
			{
				print_count += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			print_count += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (print_count);
}

