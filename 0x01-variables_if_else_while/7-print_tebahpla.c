#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet_reverse;

	for (alphabet_reverse = 'z'; alphabet_reverse >= 'a'; alphabet_reverse--)
	{
		putchar(alphabet_reverse);
	}
	putchar('\n');
	return (0);
}
