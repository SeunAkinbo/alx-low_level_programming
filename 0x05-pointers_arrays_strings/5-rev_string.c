#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - Function Reverses String
 *
 * @s: String Argument
 *
 * Return: Always 0
 **/

void rev_string(char *s)
{
	int lenght, counter;

	lenght = strlen(s);

	for (counter = 0; counter < lenght / 2; counter++)
	{
		char rem = s[counter];

		s[counter] = s[lenght - 1 - counter];
		s[lenght - 1 - counter] = rem;
	}
}
