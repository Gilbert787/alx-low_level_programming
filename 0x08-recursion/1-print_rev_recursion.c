#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - Prints a string in reverse
*
* @s: char string
*
* Return: returns a zero
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
