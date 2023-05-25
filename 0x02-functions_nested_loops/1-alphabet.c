#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the alphabet, in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
}
