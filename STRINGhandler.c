#include "main.h"

/**
 * _getenv - gets PATH member from environ
 * @name: pointer a const char
 * Return: pointer to a path member if found
 */

char *_getenv(const char *name)
{
	int i, result;

	for (i = 0; environ[i]; i++)
	{
		result = _PATHstrcmp(name, environ[i]);
		if (result == 0)
		{
			return (environ[i]);
		}
	}
	return (NULL);
}

/**
 * _puts - prints a string
 * @str: string to print
 */

void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		_putchar(str[c]);
	_putchar('\n');
}

/**
 * _putchar - prints a character
 * @c: char
 * Return: return value of write syscall
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _memset - fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: unsigned integer
 * Return: the pointer to the char array
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
