#include "main.h"

/**
 *cap_string - function that capitalize first character of a word
 *@str: string to capitalize
 *Return:returns the capitalized string
 */

char *cap_string(char *str)
{
int in = 0;

while (str[in])
{
while (!(str[in] >= 'a' && str[in] <= 'z'))
in++;

if (str[in - 1] == ' ' ||
str[in - 1] == '\t' ||
str[in - 1] == '\n' ||
str[in - 1] == ',' ||
str[in - 1] == ';' ||
str[in - 1] == '.' ||
str[in - 1] == '!' ||
str[in - 1] == '?' ||
str[in - 1] == '"' ||
str[in - 1] == '(' ||
str[in - 1] == ')' ||
str[in - 1] == '{' ||
str[in - 1] == '}' ||
in == 0)
str[in] -= 32;

in++;
}

return (str);
}
