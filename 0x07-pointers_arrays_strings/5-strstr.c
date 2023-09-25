#include "main.h"

#include <stddef.h>

/**
* _strstr - Locates the first occurrence of the substring `needle`
*           in the string `haystack`.
* @haystack: The string to search in.
* @needle: The substring to search for.
*
* Return: A pointer to the beginning of the located substring `needle`,
*         or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack, *start_needle;

	while (*haystack)
	{
		start_haystack = haystack;
		start_needle = needle;

		while (*haystack && *start_needle && (*haystack == *start_needle))
		{
			haystack++;
			start_needle++;
		}

		if (!*start_needle)
		{
			return (start_haystack);
		}

		haystack = start_haystack + 1;
	}

	return (NULL);
}

