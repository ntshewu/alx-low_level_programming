#include "function_pointers.h"
#include <stdlib>

/**
 * array_iterator - executes a function given
 *		 as a parameter on each element of an array
 * @array: array of integers
 * @size: array size
 * @action: function pointer
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
