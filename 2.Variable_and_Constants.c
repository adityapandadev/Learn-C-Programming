//                                     This Tutorial is created by Aditya Panda
// In this Program you will get to know about the Variable,Constant and Literals..

// 1. Variables

/* In programming, a variable is a container (storage area) to hold data.
Variable names are just the symbolic representation of a memory location. 

For example:
    int Marks = 95;
here Marks is a variable of type (int) and it stores a integer value of 95.

Variable stores some values at memory and also has a memory address.

Rules for naming a variable
 # A variable name can only have letters (both uppercase and lowercase letters), digits and underscore.
 # The first letter of a variable should be either a letter or an underscore.
*/

// 2. Constants

/*If you want to define a variable whose value cannot be changed, you can use the const keyword. This will create a constant
const int marks = 56;
*/

// 3. Literals

/*
Literals are data used for representing fixed values. They can be used directly in the code. For example: 1, 2.5, 'c' etc.
*/

// from below the example will start.

#include<stdio.h>

int main()
{
    int number = 5; //here the number is the variable used to store an integre value of 5.

    const int marks = 70; // by using keyword const you wont be able to change the value of the variable marks.

    printf("The value of number variable is %d \n",number);
    printf("The memory address location of number variable is %d \n",&number);

    // Also the value of a variable can be changed but not of constant

    number = 15;

    printf("The value of new number variable is %d \n",number);
    printf("The memory address location of new number variable is %d \n",&number);

    // A point to be noted that the memory address of variable will not be changed.



    return 0;



    

}