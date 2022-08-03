#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * given as a parameter on each element
 * of an array.
 * @array: array to be iterated
 * @size: size of array
 * @action: function
 * Return: nothing to return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	int n = (int)size;
	for (i = 0; i < n; i++)
	{
		action(array[i]);
	}
}
