#include "lists.h"
#include <stdio.h>
/**
 * listint_len - program function
 * @h: program parameter
 * Return: return the count of elements
 */

size_t listint_len(const listint_t *h)
{
int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
