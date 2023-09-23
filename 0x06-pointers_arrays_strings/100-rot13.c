#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using rot13
 *
 * @str: String Argument
 *
 * Return: str Value
 */

char *rot13(char *str)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dataRot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == data1[j])
			{
				str[i] = dataRot[j];
				break;
			}
		}
	}
	return (str);
}
