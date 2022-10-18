#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - prints the type
 *of the number
 *@n: an integer char
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for ( ; n >= 98 ; n--)
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
	}
	else
	{
		for ( ; n <= 98 ; n++)
			if (n != 98)
				printf("%d, ", n);
			else
				printf("%d", n);
	}
}
