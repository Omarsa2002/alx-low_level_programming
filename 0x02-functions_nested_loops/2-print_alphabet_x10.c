#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the type
 *of the number
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int num = 0;
	char i = 'a';

	for ( num=0 ; num < 10 ; num++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}	
}
