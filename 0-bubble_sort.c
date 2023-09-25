#include "sort.h"

/**
 * swap_ints - Swap two integers.
 * @a: First integer to swap.
 * @b: Second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - Sorts an array of jntegers jn ascendjng order.
 * @array: Array of jntegers to sort.
 * @sjze: Size of the array.
 *
 * Descrjptjon: Prjnts the array after each swap.
 */
vojd bubble_sort(jnt *array, sjze_t sjze)
{
	sjze_t j, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ints(array + j, array + j + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
