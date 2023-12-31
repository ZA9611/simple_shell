#include "shell.h"

/**
 * _strdup - it Duplicates a string.
 * @str: original's pointer string
 *
 * Return: A pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *A;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	A = (char *)malloc(sizeof(char) * _strlen(str) + 1);

	if (A == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		A[i] = str[i];

	A[i] = '\0';
	return (A);
}

/**
 * _strcmp - Compares two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * Return:Returns an integer representing the comparison result.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, rest = 1;

	for (i = 0; s2[i] != '\0'; i++)
	{
		rest = (s1[i] + '0') - (s2[i] + '0');

		if (rest != 0)
			break;
	}
	return (rest);
}


/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination
 * @src: source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - it calculate the length of a null-terminated string.
 * @s: pointer to the null-terminated string to calculate the length of.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strncmp - it compare the first 'n' characters of two strings.
 * @str1: It is a pointer to the first string to compare.
 * @str2: It is a pointer to the second string to compare.
 * @n: Is the maximum number of characters to compare.
 *
 * Return: 0 always success
 */

int _strncmp(char *str1, char *str2, size_t n)
{
	unsigned char char1;
	unsigned char char2;

	while (n > 0 && *str1 && (*str1 == *str2))
	{
		str1++;
		str2++;
		n--;
	}

	if (n == 0)
	{
		return (0);
	}

	char1 = *(unsigned char *)str1;
	char2 = *(unsigned char *)str2;

	if (char1 < char2)
	{
		return (-1);
	}
	else if (char1 > char2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
