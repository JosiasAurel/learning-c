
#include <stdio.h>

int main(int argc, char* argv) 
{
	int nums[5] = {1, 2, 3, 4, 5};
	// the task is to print all elements in the array using pointers
	int *nums_ = nums;
	printf("%d \n", *nums_);

	// now loop to print all of the array elements
	for (int i = 0; i < 5; i++)
	{
		printf("Element %d = %d \n", i, *(nums_ + i));
	}
	return 0;
}
