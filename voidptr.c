#include <stdio.h>

int main(int argc, char* argv)
{
	char name[] = "Josias";
	// the void ptr XD
	char l = 'j';
	void *any;

	int age = 16;

	// we dereference the pointer before using it
	any = name;
	printf("My name is %c \n", *((char *)any));
	any = &age;
	printf("I am %d years old \n", *((int *)any));
	return 0;
}
