#include "main.h"

/**
 * _strlen - calculates the length of a string
 *@s: The input string used to determine length
 *
 *  Return: (int) length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
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
	return (write(1, &c, 1));
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
