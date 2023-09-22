#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * is_seperator - Checkes for separators
 *
 * @c: Seperator Character Argument
 *
 * Return: Boolean
 */


bool is_separator(char c)
{
	/*Define the separators as specified*/
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}


/**
 * cap_string - Capitalize The words
 *
 * @str: String Argument
 *
 * Return:  String
 */

char *cap_string(char *str)
{
	bool capitalize_next = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (is_separator(str[i]))
		{
			capitalize_next = true;
		}
		else if (capitalize_next)
		{
			str[i] = toupper(str[i]);
			capitalize_next = false;
		}
		else
		{
			str[i] = tolower(str[i]);
		}
	}
	return (str);
}
