#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
* _sqrt_recursion - prints the square root of a number
*
* @n: int value
*
* Return: return a int value
*/

int _sqrt_recursion(int n)
{
	int squareroot;

	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	squareroot = sqrt(n);

	return (squareroot);
}
