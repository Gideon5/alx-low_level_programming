#include <stdio.h>

/**
 * main - prints  all the numbers of base 16 in lowercase, followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char alph;

	for (number = 48; number < 58; number++)
	{
		putchar(number);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
