#include "main.h"
#include <string.h>

/**
* _strchr - prints out the a character from a string
*
* @s: string
*
*@c: char
*
* Return: returns a pointer to the first occurance of a char
*/

char *_strchr(char *s, char c)
{
	char *a;

	a = strchr(s, c);
	return (a);
}
