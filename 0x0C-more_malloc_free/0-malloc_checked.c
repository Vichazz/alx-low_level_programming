#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - program function
 * @b: function parameter
 */

void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit (98);

return (ptr);

}
