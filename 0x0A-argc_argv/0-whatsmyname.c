#include <stdio.h>
/**
 * main: print program name
 * @argc: command line arg.
 * @argv: command line arg.
 * Return: 0 - success.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
