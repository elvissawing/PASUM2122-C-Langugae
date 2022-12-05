#include <stdio.h>
#define compare(num1,num2)

int main()
{
    int num1,num2;

printf("Enter a  first number: ");
scanf("%d", &num1);
printf("Enter a  second number: ");
scanf("%d", &num2);

   if (num1>num2)                                    \
printf("%d is bigger than %d\n", num1,num2);  \
else                                              \
printf("%d is smaller than %d \n", num1,num2);

compare(num1,num2);

   return 0;
}
