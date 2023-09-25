#include "main.h"

/**
 * _printf - prints output to console and
 * also prints data based on format specifiers.
 *
 * @format: represents a single string or
 * more which contains format specifiers.
 *
 * Return: Count of characters successfully output
 * in the console.
 *
 */

int _printf(const char *format, ...)
{
	va_list var_Args;
	int _counter = 0;

	va_start(var_Args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			switch (*format)
			{
				case 'c':
				{
					char c = va_arg(var_Args, int);

					_putchar(c);
					_counter++;
					break;
				}
				case 's':
				{
					char *str_Arg = va_arg(var_Args, char *);

					while (*str_Arg)
					{
						_putchar(*str_Arg);
						str_Arg++;
						_counter++;
					}
					break;
				}
				case 'd':
				case 'i':
				{
					int Numb = va_arg(var_Args, int);
					int num_Cpy = Numb;
					int divisor = 1;

					if (Numb < 0)
					{
						_putchar('-');
						_counter++;
						num_Cpy = -num_Cpy;
					}
					while (num_Cpy >= 10)
					{
						num_Cpy /= 10;
						divisor *= 10;
					}
					num_Cpy = Numb;

					while (divisor > 0)
					{
						int digit = num_Cpy / divisor;

						_putchar('0' + digit);
						_counter++;
						num_Cpy -= digit * divisor;
						divisor /= 10;
					}
					break;
				}
				case 'b':
				{
					unsigned int Numb = va_arg(var_Args, unsigned int);
					int binary[50];
					int itr = 0;

					if (Numb == 0)
					{
						_putchar('0');
						_counter++;
					}
					else
					{
						while (Numb != 0)
						{
							binary[itr] = Numb % 2;
							Numb /= 2;
							itr++;
						}
						while (itr--)
						{
							_putchar('0' + binary[itr]);
							_counter++;
						}
					}
					break;
					}
				case '%':
				{
					_putchar('%');
					_counter++;
					break;
				}
				default:
				{
					_putchar('%');
					_putchar(*format);
					_counter += 2;
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			_counter++;
		}
		format++;
	}

	va_end(var_Args);
	return (_counter);
}
