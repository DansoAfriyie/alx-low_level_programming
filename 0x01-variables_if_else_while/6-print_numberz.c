#include <stdio.h>

/**
 * main - This program rints all single digit numbers of base 10 wit putchar
 *
 * Return: Always 0 (success)
 */
int main(void)

{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
