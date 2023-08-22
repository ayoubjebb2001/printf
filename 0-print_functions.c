#include "main.h"

/**
 *print_c - prints a character
 *@args: list of arguments
 *
 *Return: number of characters printed
 */
int print_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);

	return (1);
}

/**
 *print_s - prints a string
 *@args: list of arguments
 *
 *Return: number of characters printed
 */
int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL)
		str = "(null)";

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		len++;
	}

	return (len);
}

/**
 *print_percent - prints a percent sign
 *@args: list of arguments
 *
 *Return: number of characters printed
 */
int print_percent(va_list args)
{
	(void) args;

	_putchar('%');

	return (1);
}
