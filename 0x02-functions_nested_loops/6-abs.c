#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *_abs - prints the type
 *of the number
 *@n: an integer char
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (n * -1);
}
