#include <stdio.h>

/**
 * main - start program
 * Return: returns 0
 */

int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if ((num % 3) == 0 && (num % 5) == 0)
{
printf("FizzBuzz");
printf(" ");
continue;
}
else if (num % 3 == 0)
{
printf("Fizz");
printf(" ");
continue;
}
else if (num % 5 == 0)
{  
printf("Buzz");
printf(" ");
continue;
}
printf("%d", num);
printf(" ");
 
if (num == 100);
continue;
}
printf("\n");
return (0);
}
