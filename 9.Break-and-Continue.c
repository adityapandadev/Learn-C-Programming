//                                     This Tutorial is created by Aditya Panda

/*
In this Program we will learn about the Break and Continue statement

1. Break

The break statement ends the loop immediately when it is encountered. Its syntax is:

break;

The break statement is almost always used with if...else statement inside the loop.

2. Continue

C continue

The continue statement skips the current iteration of the loop and continues with the next iteration. 
Its syntax is:

continue;

The continue statement is almost always used with the if...else statement.

*/

// Program to calculate the sum of numbers (10 numbers max)


#include <stdio.h>

int main() {
   int i;
   double number, sum = 0.0;

   printf("Use of Break\n");

   // If the user enters a negative number, the loop terminates 

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      // if the user enters a negative number, break the loop
      if (number < 0.0) {
         break;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   //another program
   // If the user enters a negative number, it's not added to the result

   sum = 0.0;
   
   printf("\n");

   printf("Use of Continue");

   printf("\n");

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      if (number < 0.0) {
         continue;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);


   return 0;
}