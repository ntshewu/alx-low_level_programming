#include <stdio.h>
/**
 * main - prin all arg. it receives
 * @argc: command line arg
 * @argv: array command line arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
