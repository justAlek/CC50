#include <stdio.h>
#include <cs50.h>

int main (void)

{
    string name = get_string ("Whats is your name?\n"); //get user input
    printf ("Hello, %s", name); //output hello and name

}