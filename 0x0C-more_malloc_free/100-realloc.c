#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
			return (NULL);
		return (pointer);
	}
	if (new_size > old_size)
	{
		pointer = malloc(new_size);
		if (pointer == NULL)
		return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
		*((char *)pointer + i) = *((char *)ptr + 1);
		free(ptr);
	}
	return (pointer);
}
