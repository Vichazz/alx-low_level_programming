#include "main.h"

/**
 * factorial - function prototype
 * @n: function parameter
 * Return: return factorial
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
