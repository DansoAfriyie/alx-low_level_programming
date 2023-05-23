#include <stdio.h>

/**
 * main - This program prints alphabets in lowercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alph[a]);
	}
	putchar('\n');
	return (0);
}
