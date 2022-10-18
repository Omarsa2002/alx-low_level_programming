#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[] = "_putchar";
	int i = 0;
	int size = sizeof(a) - 1;
	
	for (i = 0 ; i < size ; i++)
		_putchar(a[i]);
	_putchar('\n');
	return (0);
}
