#include "main.h"

/**
 * _isalpha - shows if a charector is an alphabet
 *
 * @c: int
 *
 * Return: @c value
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);

	else
		return (0);

	if (c > 96 && c < 123)
		return (1);

	else
		return (0);

}
