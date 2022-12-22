#include "main.h"
/**
 * _strncat - a function that concatenate two strings
 * but add inputted number of bytes
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n:integer parameter
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

int in = 0, dest_lth = 0;

while (dest[in++])
dest_lth++;

for (in = 0; src[in] && in < n; in++)
dest[dest_lth++] = src[in];

return (dest);

}
