#include "main.h"

/**
 *handle_format - handles a format specifier
 *@format: format specifier
 *@args: list of arguments
 *
 *Return: number of characters printed
 */
int handle_format(char format, va_list args)
{
	switch (format)
	{
		case 'c':
			return (print_c(args));
		case 's':
			return (print_s(args));
		case '%':
			return (print_percent(args));
		case 'd':
		case 'i':
			return (print_d(args));
		case 'b':
			return (print_b(args));
		case 'u':
			return (print_u(args));
		case 'o':
			return (print_o(args));
		case 'x':
			return (print_x(args));
		case 'X':
			return (print_X(args));
		case 'S':
			return (print_S(args));
		case 'p':
			return (print_p(args));
		default:
			_putchar('%');
			_putchar(format);
			return (2);
	}
}
