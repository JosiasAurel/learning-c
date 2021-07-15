#include <stdio.h>

// define the person struct
struct person {
	int age;
	char name[10];
};

typedef struct
{
	int age;
	char name[10];
} human;

void showPersonalInfo(struct person *pr);

int main(int argc, char* argv)
{
	struct person josias = (struct person){.name = "Josias", .age=16};
	human mike = {17, "Mike"};
	showPersonalInfo(&josias);
	showPersonalInfo(&mike);
	return 0;
}

void showPersonalInfo(struct person *pr)
{
	// accessing the members of the pointer by dereference
	printf("My name is %s and i am %d years old \n", (*pr).name, (*pr).age);
	// accessing the member of the struct via the -> operator
	printf("My name is %s and i am %d years old \n", pr->name, pr->age);
}
