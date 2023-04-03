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
			else if (s[prevW] >= 32 && s[prevW] <= 34)
				s[i] = s[i] - 32;
			else if (s[prevW] >= 40 && s[prevW] <= 41)
				s[i] = s[i] - 32;
			else if (s[prevW] == 46)
				s[i] = s[i] - 32;
			else if (s[prevW] == 59)
				s[i] = s[i] - 32;
			else if (s[prevW] == 123 || s[prevW] == 125)
				s[i] = s[i] - 32;
		}
	}

	return (s);
}
