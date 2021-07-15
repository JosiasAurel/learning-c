#include <stdio.h>

int main(int argc, char* argv)
{
	struct person {
		int age;
		char name[10];
	};

	typedef struct {
		int age;
		char name[10];
	} human;

	struct person josias;
	josias.age = 16;
	josias.name[0] = 'J';
	josias.name[1] = 'o';
	josias.name[2] = 's';
	josias.name[3] = 'i';
	josias.name[4] = 'a';
	josias.name[5] = 's';

	printf("My name is %s and i am %d years old \n", josias.name, josias.age);

	// i could also create another person but by listing it in curly braces
	struct person dane;
	dane = (struct person){23, "Dane"};
	printf("My name is %s and i am %d years old \n", dane.name, dane.age);

	// struct person instance using named initialization
	
	struct person mike;
	mike = (struct person){.name= "Mike", .age=17};

	printf("My name is %s and i am %d years old \n", mike.name, mike.age);

	human john = { 34, "John"};
	printf("My name is %s and i am %d years old. I am human", john.name, john.age);
	return 0;
}
