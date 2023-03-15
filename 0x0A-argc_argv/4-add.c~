#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
* _integer - checks if a string contains integers
*
* @s: string
*
* Return: int value
*/


int _integer(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}

	return (0);

}


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
	int i;
	int sum = 0;
	int value;

	if (argc < 1)
		printf("'0'\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			if (_integer(argv[i]) != 0)
			{
				printf("Error\n");
				return (1);
			}
 
			value = atoi(argv[i]);
			sum = sum + value;

		}

		printf("%d\n", sum);

	}

	return (0);

}
