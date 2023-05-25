#include <stdio.h>

/**
 * main - This program prints all the numbers of base 16 in lowercase
 *
 * Return: Alwas 0 (Success)
 */
int main(void)
{
	int x;
	char b;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
