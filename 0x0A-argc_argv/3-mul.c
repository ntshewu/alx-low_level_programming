#include <stdio.h>
/**
 * main - print result of multiplication
 * @argc: command line arg.
 * @argv: array of command line arg.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
