/*
*file : 0-positive_or_negative.c
*Author:Omar
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - prints the type
*of the number
*
*Return:  Always 0.
*
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if(n>0)
    {
        printf("%d",n);printf(" is positive\n");
    }
    else if(n==0)
    {   
        printf("%d",n);printf(" is zero\n");
    }
    else
    {   
        printf("%d",n);printf(" is negative\n");
    }
	/* your code goes there */
	return (0);
}
