 #include <stdio.h>
/**
 * main - print number and new line
 * @argc: command line arg
 * @argv: command line arg
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
