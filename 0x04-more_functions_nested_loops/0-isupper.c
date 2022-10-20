#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
*_isupper-checkachar
*@c:variable
*Return:0or2
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}
