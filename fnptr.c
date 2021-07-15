#include <stdio.h>

void greet(char* name);

// math operation functions
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main(int argc, char* argv)
{
	char my_name[] = "Josias";
	void (*greetptr)(char*);

	greetptr = greet;

	greetptr(&my_name);

	// we could also have an array of function pointers because in cases where we want to carry out a common operation
	// having an array of function pointers can be handy so we the array of function pointers knows what to do
	// in some cases
	// An example below is some math operations
	//
	int choice, a, b;
	int (*operation[3])(int, int);
	
	// assigning the operations our function pointer can do
	
	operation[0] = add;
	operation[1] = subtract;
	operation[2] = multiply;

	puts("Enter your first number : ");
	scanf("%d", &a);
	puts("Enter your second number : ");
	scanf("%d", &b);

	puts("What operation do you want to carry out ?");
	puts("0 for addition");
	puts("1 for subtraction");
	puts("2 for multiplication");
	puts("Enter your choice");
	scanf("%d", &choice);

	printf("The result is %d \n", operation[choice](a, b));

	return 0;
}

void greet(char* name)
{
	printf("%s \n", name);
}

int add(int a, int b)
{
	return a + b;
}

int subtract(int a, int b)
{
	return a - b;
}

int multiply(int a, int b)
{
	return a * b;
}

