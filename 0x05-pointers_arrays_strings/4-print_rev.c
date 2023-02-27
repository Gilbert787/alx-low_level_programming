#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_rev - Prints a string in reverse
*
* @s: string
*
* Return: No return
*/

void print_rev(char *s)
{
	int i = 0;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');

}
