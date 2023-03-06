#include "main.h"
#include <string.h>

/**
* _strstr - Locates a substring
*
* @haystack: string
*
* @needle: substring
*
* Return: results
*/

char *_strstr(char *haystack, char *needle)
{
	char *a;

	a = strstr(haystack, needle);
	return (a);
}
