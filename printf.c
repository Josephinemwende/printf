#include "main.h"
#include <stdarg.h>
/**
 * _printf - a function that produces output according to a formmat
 * @format: character string
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	va_list args, format;

