#include "main.h"

/**
 * jack_bauer - Prints the time
 *
 * Return: Void
 **/


void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			/*Prints Hours*/
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');

			/*Prints Minutes*/
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
