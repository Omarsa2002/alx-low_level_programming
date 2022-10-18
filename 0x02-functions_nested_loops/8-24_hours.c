#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *jack_bauer - prints the type
 *of the number
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int h2 = 0;
	int h1 = 0;
	int m2 = 0;
	int m1 = 0;

	for (h2= 0 ; h2 <= 2; h2++)
	{
		for (h1 = 0 ; h1 <= 9 ; h1++)
		{
			for (m2 = 0 ; m2 <= 5 ; m2++)
			{
				for (m1 = 0 ; m1 <= 9 ; m1++)
				{
					if (h2 == 2 && h1 > 3)
						return ;
					_putchar(h2 + '0');
					_putchar(h1 + '0');
					_putchar(':');
					_putchar(m2 + '0');
					_putchar(m1 + '0');
				}
			}
		}
	}
}
