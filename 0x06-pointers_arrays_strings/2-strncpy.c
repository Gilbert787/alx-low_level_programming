#include "main.h"
#include <string.h>

/**
* _strncpy - copies a string
*
* @dest: string
*
* @src: string
*
* @n: int value
*
* Return: return dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);

}
