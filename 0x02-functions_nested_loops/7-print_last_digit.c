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
	_putchar(n % 10);
	return (n % 10);
}
