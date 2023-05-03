#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int b, index;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (index = 0; index < b; index++)
	{
		if (index == b - 1)
		{
			printf("%02hhx\n", arr[index]);
			break;
		}
		printf("%02hhx ", arr[index]);
	}
	return (0);
}

