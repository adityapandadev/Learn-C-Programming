//                                     This Tutorial is created by Aditya Panda
// In this tutorial we will learn about the basic data types in c language.
/*
Data type is used to specify the type of data that will be stored in a variable.
we need to specify what kind of data we are using so according to it the memory address is being allocated.
to define data type we use keywords such as int,char,and float etc.
Basic data types:
1. int "stores integer values" takes 4 bytes of memory and %d,%i is format specifier 
2. char "stores character values" takes 1 bytes of memory and %c is format specifier
3. float "stores real numbers and decimal values" takes 4 bytes of memory and %f is format specifier
4. double "stores large decimal values" takes 8 bytes of memory and %lf is format specifier
*/
// in the below program we are gonna se the example of implementation of various data types

#include<stdio.h>


int main()
{
    int integer_value = 34;  //here int is the data type amd will store the integer value 34
    char character = 'a'; // here char is the data type and will store the character value
    float decimal_numbers = 33.55; // here float is the data type and will store the decimal value
    double large_decimal_numbers = 33.4444; // here double is the data type and will store the large decimal value
    

    printf("The integer value is %d \n",integer_value);
    printf("The character value is %c \n",character);
    printf("The decimal value is %f \n",decimal_numbers);
    printf("The large decimal value is %lf \n",large_decimal_numbers);


    return 0;
}
