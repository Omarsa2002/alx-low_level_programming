#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - prints the type
 *of the number
 *@n: an integer char
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
