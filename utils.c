#include "main.h"

/**
 * print_prct - prints %
 * @format: format
 * @pa: va_list
 * Return: number of characters printed
 */
int print_prct(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_putchar('%');
	return (1);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	static int buffer_count;
	static char buffer[1024];

	if (c == -1)
	{
		buffer_count = 0;
		return (0);
	}
	if (c == -2 || buffer_count == 1024)
	{
		write(1, buffer, buffer_count);
		buffer_count = 0;
	}
	if (c != -1 && c != -2)
	{
		buffer[buffer_count] = c;
		buffer_count++;
		return (1);
	}
	return (0);
}

/**
 * _putstr - writes a string to stdout
 * followed by a new line.
 * @str: input string
 * Return: character count of string.
 */
int _putstr(char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_c - prints a char.
 * @format: format of char.
 * @args: va_list with char.
 * Return: number char for printf.
 */
int print_c(char *format, va_list args)
{
	(void)format;
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * print_str- print str.
 * @format: format str.
 * @args: va_list with str.
 * Return: number str for print.
 */
int print_str(char *format, va_list args)
{
	char *string = va_arg(args, char *);
	int count;
	(void)format;

	if (string == NULL)
		string = "(null)";
	count = _putstr(string);
	return (count);
}
