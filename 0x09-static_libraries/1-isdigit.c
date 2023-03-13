#include "main.h"

/**
* _isdigit - shows is a char is uppercase
*
* @c: int value
*
* Return: @c value
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	else
		return (0);
}
