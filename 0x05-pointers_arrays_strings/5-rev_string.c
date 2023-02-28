#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* rev_string - Prints a string in reverse
*
* @s: string
*
* Return: No return
*/

void rev_string(char *s)
{
	char temp;
	int length = strlen(s);
	int middle = length / 2;
	int i;

	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}

}
