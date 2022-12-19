#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char revStr = s[0];
	int strCount = 0;
	int i;

	while (s[strCount] != '\0')
		strCount++;
	for (i = 0; i < strCount; i++)
	{
		strCount--;
		revStr = s[i];
		s[i] = s[strCount];
		s[strCount] = revStr;
	}
}

