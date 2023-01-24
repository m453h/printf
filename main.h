#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct type - Struct data type
 *
 * @op: data type argument
 * @f: The function associated
 */
typedef struct type
{
	char *op;
	int (*f)(char *format, va_list);

} type_t;

/* utils.c */
int _strlen(char *s);
int _putchar(char c);
int _putstr(char *str);
int print_c(char *format, va_list pa);
int print_str(char *format, va_list pa);

/* handler.c */
int (*handler(const char *format))(char *format, va_list);

/* _printf.c */
int _printf(const char *format, ...);

#endif
