#include "main.h"
#include <string.h>

/**
* _strcat - Joins two strings
*
* @dest: char string
*
* @src: char string
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);

}
