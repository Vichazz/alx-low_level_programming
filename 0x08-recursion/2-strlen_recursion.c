#include "main.h"

/**
 * _strlen_recursion - function prototype
 * @s: function parameter
 * @return: return string length
 */

int _strlen_recursion(char *s)
{

if (*s != '\0')
{
return 1 + _strlen_recursion(s + 1);
}

}
