#include "main.h"
#include <string.h>

/**
* _strpbrk - searches for any set of byte
*
* @s: string 1
*
* @accept: string 2
*
* Return: return results
*/

char *_strpbrk(char *s, char *accept)
{
	char *a;

	a = strpbrk(s, accept);
	return (a);
}
