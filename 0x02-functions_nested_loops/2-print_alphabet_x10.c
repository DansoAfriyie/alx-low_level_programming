#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - A function that prints 10x the alphabet
 * in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 26; x++)
		{
			putchar(alp[x]);
		}
		putchar('\n');
	}
}
