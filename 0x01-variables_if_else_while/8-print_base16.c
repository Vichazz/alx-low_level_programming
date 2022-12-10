#include <stdio.h>
/**
 * main - program entry
 * Result: returns 0
 */
int main(void)
{
char alphabet;
int nums;

for (nums = 0; nums < 10; nums++)
putchar(nums % 10 + '0');
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
putchar(alphabet);
putchar('\n');
return (0);
}
