#include "main.h"

/**
* print_most_numbers - prints most numbers except 2 and 4
*
* Return: no return
*/

void print_most_numbers(void)
{
	int c;

	c = 0;

	while (c < 10)
	{
		if (c != 2 && c != 4)
			_putchar ('0' + c);

		c++;
	}

	_putchar ('\n');

}
