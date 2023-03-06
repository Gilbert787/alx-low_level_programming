#include "main.h"
#include <string.h>

/**
* _memcpy - copies memory
*
* @dest: string
*
* @src: char string
*
* @n: int value
*
* Return: return dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
