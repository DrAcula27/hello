#include <stdio.h> //included so all standard io functions in C can be used.
#include <cs50.h> //included so command get_string can be used.

int main(void)
{
    string name = get_string("What is your name?\n"); //the word "string" gives the variable "name" the type string.
    printf("hello, %s\n", name); //prints "hello, " and the variable saved into the string called "name"
}