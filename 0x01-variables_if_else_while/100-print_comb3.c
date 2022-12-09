#include <stdio.h>

/**
 * main - prints all the possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, second;

	for (first = 48; first <= 56; first++)
	{
		for (second = 49; second <= 57; second++)
		{
			if (second > first)
			{
				putchar(first);
				putchar(second);
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
