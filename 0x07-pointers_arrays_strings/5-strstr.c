#include "main.h"

/**
 * *_strstr -> Locates a substring
 *
 * @haystack: Input Substring
 * @needle: Input string
 *
 * Return: Depend Condition
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i + j] != '\0' && haystack[i + j] == needle[j]; j++)
			continue;
		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return ('\0');
}
