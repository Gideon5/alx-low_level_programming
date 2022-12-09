#include <stdio.h>

/**
 * main - prints all the possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = 48; n <= 56; n++)
	{
		for (second = 49; second <= 57; second++)
		{
			if (second > first)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
