#include <stdio.h>

/**
 * main - Prints alphabets in lowercase, all letters except q and e
 *
 * Return: (success) 0
 */

int main(void)

{
	char lower[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(lower[a]);
	}
	putchar('\n');
	return (0);
}

