nclude "main.h"

/**
 *_printf - produces output according to a format
 *@format: character string
 *
 *Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == '\0')
				return (-1);

			len += handle_format(*format, args);
		}
		else
		{
			_putchar(*format);
			len++;
		}

		format++;
	}

	va_end(args);

	return (len);
}
