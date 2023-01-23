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
 * print_character - prints char
 * @list: list of char(s) to print
 * Return: pointer to arg list of
 * character(s)
 */
char *print_character(va_list list)
{
	char *c;

	c = malloc(sizeof(char) * 2);
	if (c == NULL)
		return (NULL);
	c[0] = va_arg(list, int);
	c[1] = '\0';
	write(1, c, 2);
	return (c);
}

/**
 * print_string - prints string
 * @list: list of strings to print
 * Return: pointer to arg(s) list of string(s)
 */
char *print_string(va_list list)
{
	char *s;
	int size;

	s = va_arg(list, char *);
	for (size = 0; *(s + size); size++)
		;
	write(1, s, size);
	return (s);
}

/**
 * print_percentage - prints char percentage
 * @list: arguement char
 * Return: pointer arg(s) list of format specifier
 */
char *print_percentage(va_list list)
{
	char *c;

	(void)list;
	c = malloc(sizeof(char) * 2);
	if (c == NULL)
		return (NULL);
	c[0] = '%';
	c[1] = '\0';
	write(1, c, 2);
	return (c);
}
