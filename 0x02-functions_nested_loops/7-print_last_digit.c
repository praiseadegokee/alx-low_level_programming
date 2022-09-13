#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - main function
 *
 * @x: integer to get last digit of
 * Return: last digit of x
 *
 */

int print_last_digit(int x)
{
	_putchar('0' + _abs(x % 10));
	return (_abs(x % 10));
}
