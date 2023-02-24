#include "main.h"

/**
* print_numbers - prints numbers
*
* Return: no return
*/

void print_numbers(void)
{
	int c;

	c = 0;

	while (c < 10)
	{	_putchar('0' + c);
		c++;
	}

	_putchar ('\n');

}
