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
	va_list list;
	int i, j;
	int char_counter = 0;
	char *temp = NULL;
	type_t ops[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_percentage},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			temp = "";
			j = 0;
			while (ops[j].p)
			{
				if (format[i] == *(ops[j]).p)
					temp = ops[j].f(list);
				j++;
			}

			char_counter = _strlen(temp);
		}
		else
		{
			_putchar(format[i]);
			char_counter++;
		}
	}
	va_end(list);
	return (char_counter);
}

