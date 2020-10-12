//                                     This Tutorial is created by Aditya Panda
/*   
In this Tutorial you will learn about how to Perform Input/Output Operation in C Programming

We use Printf() to output anything
and We use Scanf() to input anything in C
*/

#include<stdio.h>

int main()
{
   int a; // we are declaring a variable by this statement

   printf("Enter a Value ,What you want to show (remember it must be a number only):\t");//by this statement we use printf() to output the statement

   scanf("%d",&a); // by this statement we provide some value to the program or we can say we input any value.

   printf("The value Entered is: \t %d",a); //by this statement the we are outputing the entered value.

   return 0;




}