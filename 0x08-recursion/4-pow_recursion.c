#include <stdio.h>

/**
* _pow_recursion - prints out the power of a number
*
* @y: int value
*
* @x: int value
*
* Return: return int value
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
