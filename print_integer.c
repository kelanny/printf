#include "main.h"

/**
 * print_integer - prints an integer
 * @num: the integer to be printed
 * Return: number of characters printed
 */

int print_integer(int num)
{
	int printed = 0;

	if (num < 0)
	{
		printed += write(1, "-", 1);
		num = -num;
	}
	if (num / 10)
		printed += print_integer(num / 10);
	printed += write(1, &"0123456789"[num % 10], 1);
	return (printed);
}
