#include "main.h"


/**
 * handler - selects a print function according to format specifier
 *
 * @format: string containing the specifier
 *
 * Return: pointer to the print function
 */
int (*handler(const char *format))(char *format, va_list)
{
	int i;

	type_t fn[] = {
		{"%c", print_c},
		{"%s", print_str},
		{"%%", print_prct},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);

	for (i = 0; fn[i].op; i++)
	{
		if (format[1] == fn[i].op[1])
			return (fn[i].f);
	}

	return (NULL);
}
