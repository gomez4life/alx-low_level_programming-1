#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: A pointer to a character that will be changed
 * @src: A pointer to a character that will also be changed
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (desc[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		desc[i] = src[j];
		j++;
		i++;
	}
	desc[i] = '\0';

	return (dest);
}
