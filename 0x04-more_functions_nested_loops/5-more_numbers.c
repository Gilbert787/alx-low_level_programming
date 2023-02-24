#include "main.h"

/**
* more_numbers - prints more numbers
*
* Return: no return
*/

void more_numbers(void)
{
	int c;
	int b;


	for (c = 0; c < 10; c++)
	{
		b = 0;

		while (b < 15)
		{
			if (b >= 10)
				_putchar ('0' + (b / 10));

			_putchar ('0' + (b % 10));
			b++;
		}

		_putchar ('\n');
	}

}
