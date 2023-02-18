#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 48;

	while (number >= 48 && number <= 57)
	{
		putchar(number);
		number++;
	}

	putchar('\n');

	return (0);
}
