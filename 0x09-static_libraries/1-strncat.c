#include "main.h"
#include <string.h>

/**
* _strncat - Joins two string and how many characters to include
* @dest: string
* @src: string
* @n: Number of characters to include
* Return: return dest
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);

}
