#include <stdio.h>

int main(int argc, char* argv) 
{
	// In this exercise, the target is to create an array of strings so we can loop through and convert to numbers
	// we could create an array like below
	char nums[2][3] = {
		"1",
		"232"
	};

	// the problem with the above structure is that when looping through it, we have to loop throught the grid
	// and the size have to take that of the largest element in the array. So we have to access it we have to use
	// the grid indexes like nums[0][0] to access 1 but for the rest it is impractical
	//
	// A better solution is to create an array of pointers such that accessing an element will give us its pointer
	// so we can manipulate it
	
	char *nums_w_ptr[] = {
		"1",
		"232"
	};

	int num_;

	// looping and converting each element to a string then printing it
	for (int i = 0; i < 2; i++)
	{
		num_ = atoi(nums_w_ptr[i]);
		printf("Element %d is %d \n", i, num_);
	}

	// we are done
	return 0;
}
