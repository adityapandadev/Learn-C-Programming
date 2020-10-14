//                                     This Tutorial is created by Aditya Panda
/*
In this tutorial we will learn about the Input and Output function in C Programming
To input something to program we use scanf()
To output something by program we use printf()
*/

#include<stdio.h>

int main()
{
    int a;

    printf("Enter any number that you want to output:\t"); //here we used printf() to show some message on the output screen

    scanf("%d",&a); // here we use scanf() to make some input to the program

    printf("The Entered Number is \t %d",a); // here we again used printf() to output the entered number

    return 0;



}