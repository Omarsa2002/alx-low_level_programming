#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *times_table- prints the type
 *of the number
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i=0;
	int j=0;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (j != 0)
				_putchar(' ');
			_putchar(i * j);
			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}