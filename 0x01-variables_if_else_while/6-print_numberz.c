#include <stdio.h>

/**
 * main - Prints all single digi numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 48; number < 59; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}

