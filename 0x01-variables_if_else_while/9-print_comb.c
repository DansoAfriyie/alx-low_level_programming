#include <stdio.h>

/**
 * main - All the posible combination of single-digit numbers
 * using putchar to print data
 * Return: (Success) 0 Aways
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
