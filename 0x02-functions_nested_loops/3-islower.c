#include "main.h"
/**
 * _islower - program entry point
 * @c: is the function argument
 * Return: returns 0 or 1
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
