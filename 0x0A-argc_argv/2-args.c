#include <stdio.h>

/**
 * main - program start
 * @argc: argument counter
 * @argv: argument vector
 * Return: return 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
