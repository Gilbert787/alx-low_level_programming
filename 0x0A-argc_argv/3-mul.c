#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - prints out the name of the first argument
*
* @argc: argument count int value
*
* @argv: argument vector array of strings
*
* Return: return 0 success
*/

int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
		printf("Error\n");

	else
	{
		mult = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		printf("%d\n", mult);
	}

	return (0);

}
