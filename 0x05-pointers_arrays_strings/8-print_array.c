#include "main.h"
#include <stdio.h>

/**
* print_array - prints out any element of an array
*
* @a: integer
* @n: integer
*
* Return: No return
*/

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n && n >= 0)
	{
		printf("%d", a[i]);

	if (i + 1 < n)
		printf(", ");

	i++;
	}

	printf("\n");

}
