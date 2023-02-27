#include "main.h"

/**
* swap_int - swapts the values of two int's
*
* @a: int value
*
* @b: int value
*
* Return: No return
*/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}
