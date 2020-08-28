#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, -1 if is not present or array is empty
 **/
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (search(array, 0, size, value));
}

/**
 * search - searches for the value
 * @array: pointer to the first element of the array to search in
 * @begi: beginning of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, -1 if is not present or array is empty
 **/
int search(int *array, size_t begi, size_t size, int value)
{
	size_t i, mid;
	char *spc;

	if (begi >= size)
		return (-1);
	mid = begi + (size - begi - 1) / 2;
	printf("Searching in array:");
	spc = " ";
	for (i = begi; i < size; i++)
	{
		printf("%s%d", spc, array[i]);
		spc = ", ";
	}
	printf("\n");
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (search(array, begi, mid, value));
	return (search(array, mid + 1, size, value));
}
