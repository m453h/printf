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
	char *p;
	char *(*f)(va_list);
} type_t;

char *print_character(va_list list);
char *print_string(va_list list);
char *print_percentage(va_list list);
int _strlen(char *s);
int _putchar(char c);


/* _printf.c */
int _printf(const char *format, ...);

#endif
