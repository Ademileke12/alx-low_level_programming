#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - This function returns pointer to a 2 dimemsional array
 * @width: The width of the array
 * @height: The height of the array
 * Return: the pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int total_size, i;
	int **ptr;

	if (width == 0 || height == 0)
		return (NULL);

	total_size = width + height;

	ptr = malloc(sizeof(int) * total_size);

	for (i = 0; i < total_size; ++i)
	{
		ptr[i] = 0;
	}

return (ptr);
}
