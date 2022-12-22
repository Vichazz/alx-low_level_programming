#include "main.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: String that will be appended
 *@src: String to be concatenated
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

int in = 0, dest_lth = 0;

while (dest[in++])
dest_lth++;

for (in = 0; src[in]; in++)
dest[dest_lth++] = src[in];

return (dest);
}
