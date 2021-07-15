#include <stdio.h>

void* square(void* num);

int main(int argc, char* argv)
{
	int a = 4;
	printf("The square of %d is %d \n", a, square(&a));
	return 0;
}

void* square(void* num)
{
	// we want the function to return the square of integers
	int square_;
	square_ = *((int* )num) * *((int* )num);
	return square_;
}
