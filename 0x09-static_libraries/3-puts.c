#include "main.h"

/**
* _puts - prints out a string
*
* @str: string
*
* Return: nothing to return
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str++);
	}

	_putchar ('\n');

}
