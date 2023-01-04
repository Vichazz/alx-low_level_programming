#include "main.h"

/**
 * _strlen_recursion - function prototype
 * @s: function parameter
 * @return: return string length
 */

int _strlen_recursion(char *s)
{

static int count;
if (*s != '\0')
{
count = count + 1;
_strlen_recursion(s + 1);
}
return count;
}
