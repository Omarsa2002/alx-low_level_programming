#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 *_isalpha - prints the type
 *of the number
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	return (0);
}
