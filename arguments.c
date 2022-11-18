#include "main.h"

/**
 * main - prints all the arguments without using ac
 * @av: NULL terminated array of strings
 * @ac: number of items in av
 * Return: Always 0 on Success
 */
int main(int ac, char **av)
{
	(void) ac;
	int i;

	for (i = 0; av[i] != NULL; i++)
		printf("%s\n", av[i]);

	return (0);
}
