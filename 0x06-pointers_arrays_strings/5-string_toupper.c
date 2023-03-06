#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
* string_toupper - converets string to uppercase
*
* @str: string
*
* Return: return a character
*/

char *string_toupper(char *str)
{
	int i = 0;
	char *ch;
	char *p;

	while (str[i])
	{
		ch = str[i];
		p = toupper(ch);
		i++;
	}

	return (p);
}
