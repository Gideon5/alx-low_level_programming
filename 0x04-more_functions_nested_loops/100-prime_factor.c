#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int q;
	long int num;
	long int largest;

	num = 612852475143;
	largest = -1;

	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}

	for (q = 3; q <= sqrt(num); q = q + 2)
	{
		while (num % q == 0)
		{
			largest = q;
			num = num / q;
		}
	}

	if (num > 2)
		largest = num;

	printf("%ld\n", largest);

	return (0);
}
