#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *_islower - prints the type
 *of the number
 *@c: an integer char
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}