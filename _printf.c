#include "main.h"

int _print_num(int num);
/**
 * _printf - produces output according to format
 * @format: number of arguments passed.
 * Return: number of characters written to stdout.
 */
int _printf(const char *format, ...)
{
	int i = 0, printed = 0;
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			printed++;
		}
		else
		{
			i++;
			if (format[i] == 's')
			{
				char *s = va_arg(ap, char *);

				write(1, s, _strlen(s));
				printed += _strlen(s);
			}
			else if (format[i] == 'c')
			{
				int c = va_arg(ap, int);
				char ch = (char)c;

				write(1, &ch, 1);
				printed++;
			}
			else if (format[i] == '%')
			{
				write(1, &format[i], 1);
				printed++;
			}

			else if (format[i] == 'd' || format[i] == 'i')
			{
				int num = va_arg(ap, int);

				printed += print_integer(num);
			}
			else if (format[i] == 'b')
			{
				int num = va_arg(ap, int);
				printed += _print_binary(num);
			}
		}
		i++;
	}
	va_end(ap);
	return (printed);
}

