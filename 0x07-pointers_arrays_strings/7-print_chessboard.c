#include "main.h"
#include <string.h>
/**
 * print_chessboard - Prints the Chessboard
 *
 * @a: Character Array Argument
 *
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
