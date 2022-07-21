#include "main.h"

/**
 * alloc_grid - create a 2 dimensional
 * array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: a pointer to the array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		else
		{
			for (j = 0; j < width; j++)
				arr[i][j] = 0;
		}
	}

	return (arr);
}
