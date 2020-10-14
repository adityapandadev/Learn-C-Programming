//                                     This Tutorial is created by Aditya Panda

/*
In this Program we will learn about the Operators in C Programming.

Types of Operators in C Programming...

1. Arithmatic operator  (to perform arithmatic operations)

2. Assignment operator (to assign some value to the operand)

3. Increment and Decrement operator (to incease or decrease the value of operand by 1)

4. Relational operator  (to compare the the relationship between to operator)

5. Logical operator  (To perform logical operation betwen two operator)

6. C Bitwise operator (It performs bitwise operation)
*/

#include<stdio.h>

int main()
{
   // Working of arithmetic operators

   printf("Working of arithmetic operators \n");

    int a = 9,b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);


    //working of increment decrement operators
    printf("\n Working of increment decrement operators \n");

    a = 10, b = 100;
    c = 12;
    int d = 100;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %d \n", ++c);
    printf("--d = %d \n", --d);


    // working of asignment operator
    printf("\n Working of asignment operators \n");
    

    a = 5, c;

    c = a;      // c is 5
    printf("c = %d\n", c);
    c += a;     // c is 10 
    printf("c = %d\n", c);
    c -= a;     // c is 5
    printf("c = %d\n", c);
    c *= a;     // c is 25
    printf("c = %d\n", c);
    c /= a;     // c is 5
    printf("c = %d\n", c);
    c %= a;     // c = 0
    printf("c = %d\n", c);

    //Working of Realtional operator
    printf("\n Working of Relational operators \n");

    a = 5, b = 5, c = 10;

    printf("%d == %d is %d \n", a, b, a == b);
    printf("%d == %d is %d \n", a, c, a == c);
    printf("%d > %d is %d \n", a, b, a > b);
    printf("%d > %d is %d \n", a, c, a > c);
    printf("%d < %d is %d \n", a, b, a < b);
    printf("%d < %d is %d \n", a, c, a < c);
    printf("%d != %d is %d \n", a, b, a != b);
    printf("%d != %d is %d \n", a, c, a != c);
    printf("%d >= %d is %d \n", a, b, a >= b);
    printf("%d >= %d is %d \n", a, c, a >= c);
    printf("%d <= %d is %d \n", a, b, a <= b);
    printf("%d <= %d is %d \n", a, c, a <= c);

    //working of logical operator
    printf("\n Working of logical operators \n");

    a = 5, b = 5, c = 10;
    int  result;

    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", result);

    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", result);

    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", result);

    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", result);

    result = !(a != b);
    printf("!(a != b) is %d \n", result);

    result = !(a == b);
    printf("!(a == b) is %d \n", result);
    
    return 0;


}