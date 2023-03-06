#include "main.h"
#include <string.h>

/**
* _strspn - checks the number of matching characters
*
* @s: string 1
*
* @accept: string 2
*
* Return: return the number of characters
*/

unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
