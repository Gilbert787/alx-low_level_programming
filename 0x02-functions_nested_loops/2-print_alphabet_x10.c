#include "main.h"

/**
 * print_alphabet_x10 - print all alphabets (a to z) 10 times.
 *
 * No return
 */

void print_alphabet_x10(void)
{
	int i = 0, b;

	while (i < 10)
	{
		b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}

		_putchar('\n');
		i++;
	}

}
