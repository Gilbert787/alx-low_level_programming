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
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);

}
