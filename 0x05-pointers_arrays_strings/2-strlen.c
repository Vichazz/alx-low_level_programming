#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @str: The string to get the length of.
 * Return: The length of the string
 */

int _strlen(char *str)
{
int leng = 0;

while (*str++)
leng++;

return (leng);
}
