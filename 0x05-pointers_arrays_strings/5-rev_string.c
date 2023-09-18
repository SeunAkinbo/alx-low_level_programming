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

	for (counter = lenght - 1; counter >= 0; counter--)
		printf("%c", s[counter]);
	printf("\n");
}
