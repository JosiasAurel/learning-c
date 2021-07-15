#include <stdio.h>

int main(int argc, char *argv)
{
    // char a = getchar(); // get a single character

    // using gets

    char name[6]; // will contain my name

    // gets(name); // can get input as seq of chars || string

    // scanf("%s", name); // takes the input that matched the specifier -> places the input at specified address

    /* scanf stops reading input as soon as it encounters a space */

    int age;

    // scanf("%d", &age);

    // printf("You got %d from stdin \n", age); // %s to be parsed as string

    // putchar can be used to output a single character
    
    // this too is a comment lol swap  swap ??

    /* char c = getchar();

    putchar(c); */

    // puts prints the output as a string

    /* scanf("%s", &name);
    puts("The string was : \n");
    puts(name); */

    /* puts("Enter your name : ");
    gets(name);
    puts("Enter your age : ");
    scanf("%d", &age);

    printf("Hey, my name is %s and i am %d years old \n", name, age);

    puts("Done !"); */

    // formatted input
    puts("Please enter your name and age respectively : ");
    scanf("%s %d", &name, &age);

    printf("Hey, my name is %s and i am %d years old", name, age);

    // we also do have fgets and fputs 
    // fgets takes a variable to which it has to write the value as first argumnet, the length of the input and 
    // the medium from where the input comes from like stdin
    // fputs takes a variable from which to read from and outputs the value to some medium like stdout
    return 0;
}
