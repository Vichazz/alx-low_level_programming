#include <stdio.h>

/**
 * main - program start
 * Return: returns 0
 */

int main(void)
{
int alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q' || alphabet == 'e')
continue;
putchar (alphabet);
}
printf("\n");
return (0);

}
