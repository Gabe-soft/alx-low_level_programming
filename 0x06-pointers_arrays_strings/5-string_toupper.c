#include "main.h"
/**
 * string_toupper - changes lowercase letters to uppercase of a string
 * @str: string to change
 * Return: string changed
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
		i++;
	}

	return (str);
}
