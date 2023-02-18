#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 48;

	while (number >= 48 && number <= 102)
	{
		putchar(number);
			if (number == 57)
				number = 96;
		number++;
	}

	putchar('\n');

	return (0);
}
