#include "main.h"
#include <string.h>

/**
* puts_half - Prints out second half of a string
*
* @str: String
*
* Return: No return
*/

void puts_half(char *str)
{
	int length = strlen(str);
	int true_len = length - 1;
	int middle = true_len / 2;
	int start = middle + 1;
	int i;

	for (i = start; i < length; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');

}
