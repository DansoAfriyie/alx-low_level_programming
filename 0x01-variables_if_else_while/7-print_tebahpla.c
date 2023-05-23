#include <stdio.h>

/**
 * main - A program that print lowercase alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char C;

	for (C = 'z'; C >= 'a'; C--)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
