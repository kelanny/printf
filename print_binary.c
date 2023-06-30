#include "main.h"
/**
 * print_binary - print a given digit in binary
 * @num: The input number to print in binary.
 * Return: Number of binary characters printed.
 */

int _print_binary(int num)
{	
	int i = 0, char_printed = 0;
	int binary_array[32];

	if (num == 0)
		write(1, "0", 1);
	for (i = 0; num > 0; i++)
	{
		binary_array[i] = num % 2;
		num /= 2;
	}
	for (i -= 1; i >= 0; i--)
	{	
		char dig = binary_array[i] + '0';
		write(1, &dig, sizeof(dig));
		char_printed++;
	}
	return (char_printed);
}
