#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: pointer to a string
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	int i;
	char *dest_str = NULL;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	dest_str = malloc(sizeof(char) * (i + 1));
	if (dest_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dest_str[i] = str[i];
	}
	dest_str[i] = '\0';
	return (dest_str);
}

/**
 * _splitstring - counts number of words in string
 * @str: char
 * Return: number of words in string
 */

int _splitstring(char *str)
{
	int i, searchflag = 1, wordcount = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && searchflag == 1)
		{
			wordcount += 1;
			searchflag = 0;
		}
		if (str[i + 1] == ' ')
			searchflag = 1;
	}
	return (wordcount);
}

/**
 * _strcmp - compares two strings
 * @s1: char
 * @s2: char
 * Return: integer
 */

int _strcmp(const char *s1, const char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

/**
 * _strcat - concatenates two strings
 * @dest: char
 * @src: char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: char
 * Return: integer
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
