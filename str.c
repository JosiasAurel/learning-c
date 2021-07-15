#include <stdio.h>
#include <string.h>

// in this program our goal is to handle strings

int main(int argc, char* argv)
{
	char name[] = "Josias";
	char name_[6];
	// strcpy(name, name_);
	char last_name[] = " Aurel";
	strcat(name, last_name);
	printf("My concatenated names are %s \n", name); // concatenate my names
	printf("My name copy %s \n", name_);
	printf("My Name reversed %s \n", strrev(name));
	int len = strlen(name);
	printf("What is the lenght of my name ? %d \n", len);
	// printf("Is my name and copy the same value ? %b \n", strcmp(name, name_));

	// let us make use of sprintf() -> it takes as first argument the value to which to store the string and as
	// second argument what constitutes the string 
	// Example below
	char greet[60];
	char names[] = "Josias Aurel";
	int age = 16;
	sprintf(greet, "Good morning, my name is %s and i am %d years old", names, age);
	printf("New line \n");
	printf("%s \n", greet);

	// another useful string utility function is sscanf
	// What it essentially does is it scans for a string and then puts the 'parts' and stores it in
	// the specified variables
	// Example below
	
	char greeting[25];
	char names_[12];
	char and[10];
	char wut_[20];
	int age_;
	char wut__[10];

	sscanf(greet, "%s %s %s %s %d %s", greeting, names_, and, wut_, &age, wut__);

	printf("%s %s %s %s %d %s \n", greeting, names_, and, wut_, age, wut__);

	char fc[] = "I hate C 100";
	char i[1];
	char hate[4];
	char c[1];
	int per;

	sscanf(fc, "%c %s %c %d", i, hate, c, &per);
	printf("%c %s %c %d", i, hate, c, per);
	return 0;
}
