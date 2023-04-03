#include <stdio.h>

/**
 * cap_string - capitalize all words
 * @s:s string array
 * return : string array
 */

char *cap_string(char *s)
{
	int x;
	int prevW;

	for (x = 0; s[x] != '\0'; x++)
	{
		prevW = i - 1;
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			if (x == 0)
				s[x] = s[x] - 32;
			else if (s[prevW] >= 9 && s[prevW] <= 10)
				s[x] = s[x] - 32;
			else if (s[prev] >= 32 && s[prev] <= 34)
				s[i] = s[i] - 32;
			else if (s[prev] >= 40 && s[prev] <= 41)
				s[i] = s[i] - 32;
			else if (s[prev] == 46)
				s[i] = s[i] - 32;
			else if (s[prev] == 59)
				s[i] = s[i] - 32;
			else if (s[prev] == 123 || s[prev] == 125)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
