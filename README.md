This is a clone printf project named _printf.
The project was handled by Ndigirigi Gichuhi and Kelanny.
_printf has the same functionality as the original printf.

Task: 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%

Task: 1. Education is when you read the fine print. Experience is what you get if you don't
> Handle the following conversion specifiers:
	> d
	> i

Task: 2. With a face like mine, I do better in print
> Handle the following custom conversion specifiers:
  b: the unsigned int argument is converted to binary
