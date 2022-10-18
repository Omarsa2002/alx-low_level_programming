#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *print_alphabet - prints the type
 *of the number
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
