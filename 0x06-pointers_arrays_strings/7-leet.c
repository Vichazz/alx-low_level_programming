#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
int in1 = 0, in2;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

while (str[in1])
{
for (in2 = 0; in2 <= 7; in2++)
{
if (str[in1] == leet[in2] ||
str[in1] - 32 == leet[in2])
str[in1] = in2 + '0';
}

in1++;
}

return (str);
}
