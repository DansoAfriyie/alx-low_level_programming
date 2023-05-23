#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and uppercase
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(lower[a]);
	}
	for (a = 0; a < 26; a++)
	{
		putchar(upper[a]);
	}
	putchar('\n');
	return (0);
}
