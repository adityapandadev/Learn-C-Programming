//                                     This Tutorial is created by Aditya Panda

/*
In this Program we will learn about while loop..

syntax:
while (testExpression) 
{
    // statements inside the body of the loop 
}

How while loop works?

# The while loop evaluates the test expression inside the parenthesis ().

# If the test expression is true, statements inside the body of while loop are executed. Then, the test expression is evaluated again.

# The process goes on until the test expression is evaluated to false.

# If the test expression is false, the loop terminates (ends).

There is also a another type of while loop called do-while loop

The do..while loop is similar to the while loop with one important difference. The body of do...while loop 
is executed at least once. Only then, the test expression is evaluated.

Syntax

do
{
   // statements inside the body of the loop
}
while (testExpression);

How do...while loop works?

# The body of do...while loop is executed once. Only then, the test expression is evaluated.

# If the test expression is true, the body of the loop is executed again and the test expression is evaluated.

# This process goes on until the test expression becomes false.

# If the test expression is false, the loop ends.

*/

// Print numbers from 1 to 5

#include <stdio.h>
int main()
{
    int i = 1;
    
    while (i <= 5)
    {
        printf("%d\n", i);
        ++i;
    }

    return 0;
}

//Example for do-while loop

// Program to add numbers until the user enters zero

/*

#include <stdio.h>
int main()
{
    double number, sum = 0;

    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);

    printf("Sum = %.2lf",sum);

    return 0;
}

*/