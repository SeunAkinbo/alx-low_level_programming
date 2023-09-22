#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes the words in a string
 *
 * @str: Seperator Character Argument
 *
 * Return: String Value
 */

char *cap_string(char *str)
{
	int i, j, len, slen;
	char separator[] = " \t\n,;.!?\"(){}";

	len = strlen(separator);
	slen = strlen(str);

	for (i = 0; i < slen; i++)
	{
		if (str[i] != '\0')
		{
			for (j = 0; j < len; j++)
			{
				if (str[i] == separator[j])
				{
					if (islower(str[i + 1]))
						str[i + 1] = toupper(str[i + 1]);
				}
			}
		}
	}
	return (str);
}

