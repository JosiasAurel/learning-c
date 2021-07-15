#include <stdio.h>

// as pointers give super powers to even functions, we can manipulate the actual values

void swap(int *n1, int *n2); // our function takes the address of two input variables and outputs the result

int main(int argc, char* argv)
{
	int a = 2;
	int b = 3;
	swap(&a, &b); // swap a with b and vice versa
	printf("a = %d and b = %d ", a, b);
	return 0;
}

void swap(int *n1, int *n2) 
{
	int temp; // a var to temporarily store the value of one
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
