#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @q: pointer to string params
 *
 * Return: *q
 */
char *rot13(char *q)
{
	int m;
	int n;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (m = 0; q[m] != '\0'; m++)
	{
		for (n = 0; n < 52; n++)
		{
			if (q[m] == data1[n])
			{
				q[m] = datarot[n];
				break;
			}
		}
	}
	return (q);
}
