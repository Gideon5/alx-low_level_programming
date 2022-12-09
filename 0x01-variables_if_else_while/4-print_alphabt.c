#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase followed by a newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
