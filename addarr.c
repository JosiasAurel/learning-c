#include <stdio.h>

int add(int *arr, int count);

int main(int argc, char* argv)
{
	int lo[3] = {1, 2, 3};
	printf("Sum = %d \n", add(lo, 3));
	return 0;
}

int add(int *arr, int count) 
{
	int sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum += arr[i];
	}
	return sum;
}

