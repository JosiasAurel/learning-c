#include <stdio.h>
#include <stdlib.h>

// our callback function to handle sorting of our array
int sort_el(const void*, const void*);

int main(int argc, char* argv)
{
	int numbers[5] = {4, 2, 8, 9, 1};
	int count, width;
	count = sizeof(numbers) / sizeof(numbers[0]);
	width = sizeof(numbers[0]);

	puts("Array before");
	for (int i = 0; i < 5; i++)
	{
		printf("Element %d is %d \n", i, numbers[i]);
	}

	// quick sort
	qsort(numbers, count, width, sort_el);
	/*
	printf("Size of array : %d \n", sizeof(numbers));
	printf("Size of array element : %d \n", sizeof(numbers[0]));
	*/
	puts("Arraay after");
	for (int i = 0; i < 5; i++)
	{
		printf("Element %d is %d \n", i, numbers[i]);
	}

	return 0;
}

int sort_el(const void* e1, const void* e2)
{
	if (*((int *)e1) == *((int *)e2)) return 0;
	if (*((int *)e1) < *((int *)e2)) return -1;
	if (*((int *)e1) > *((int *)e2)) return 1;
}
