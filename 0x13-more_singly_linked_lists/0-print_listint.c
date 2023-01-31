#include "lists.h"

/**
 *  print_listint - program function
 * @h: function parameter
 * Return: return count
 */


size_t print_listint(const listint_t *h)
{
int count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h =  h->next;
}
return (count);
}
