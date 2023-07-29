#include "shell.h"

/**
 * bfree – this frees the pointer and NULLs the address
 * @ptr: this is the address of pointer to free
 *
 * Return:if freed 1, else 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}

