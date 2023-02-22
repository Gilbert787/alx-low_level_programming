#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: int value
 *
 * Return: return the int value
 */

int print_last_digit(int a)
{
	int b = abs(a % 10) + '0';

	_putchar (b);
	return (b - '0');
}
