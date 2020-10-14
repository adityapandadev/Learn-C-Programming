//                                     This Tutorial is created by Aditya Panda

/*
In this Program we will learn about the the If-Else conditional statement

the syntax for if-else statement is

if (test expression) {
    // statements to be executed if the test expression is true
}
else {
    // statements to be executed if the test expression is false
}

if the expression inside if statement evaluates to true,then the code inside if statement will be combined 
or if the expression evaluates to false then the code inside else statement will run.

also you can only write if statement
if (test expression) 
{
   // statements to be executed if the test expression is true
}
the code inside if satement will only complile when the expression will be evaluated to true
*/

// Check whether an integer is odd or even

#include <stdio.h>
int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if the remainder is 0
    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
}
