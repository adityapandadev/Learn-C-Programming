//                                     This Tutorial is created by Aditya Panda

/*
In this Program we will learn about For loop

In programming, a loop is used to repeat a block of code until the specified condition is met.

syntax for for loop

for (initializationStatement; testExpression; updateStatement)
{
    // statements inside the body of loop
}

How for loop works?
# The initialization statement is executed only once.

# Then, the test expression is evaluated. If the test expression is evaluated to false, the for loop is 
terminated.

# However, if the test expression is evaluated to true, statements inside the body of for loop are executed, 
and the update expression is updated.

# Again the test expression is evaluated.

This process goes on until the test expression is false. When the test expression is false, the loop terminates.
*/
// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)
    {
        sum += count;
    }

    printf("Sum = %d", sum);

    return 0;
}

