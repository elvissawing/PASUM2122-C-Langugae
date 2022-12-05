// get the sum of two number, the result of the subtraction, the result of division and multiplication result when two numbers are read as input value from user.
#include <stdio.h>

int main()
{
   int first, second, add, subtract, multiply;
   float divide;

   printf("Enter two numbers:\n");
   scanf("%d%d", &first, &second);

   add = first + second;
   subtract = first - second;
   multiply = first * second;
   divide = first / (float)second;

   printf("Sum = %d\n", add);
   printf("Difference = %d\n", subtract);
   printf("Multiplication = %d\n", multiply);
   printf("Division = %f\n", divide); // "%.2lf" to print two decimal digits, by default (%lf) we get six

   return 0;
}
