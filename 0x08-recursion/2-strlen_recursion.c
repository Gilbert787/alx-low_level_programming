#include <stdio.h>

/**
* _strlen_recursion - Prints the length of a string
*
* @s: char string
*
* Return: return an int
*/

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);

}
