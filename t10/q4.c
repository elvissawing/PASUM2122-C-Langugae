#include <stdio.h>
#include <math.h>
int power(int n1,int n2);
int main()
{
 int a, result, base;
 printf("Enter base number: ");
 scanf("%d", &base);
 printf("Enter power number(positive integer): ");
 scanf("%d", &a);
 result = power(base, a);
 printf("%d^%d = %d", base, a, result);
 return 0;
}
int power(int base, int a) {
 if (a != 0)
 return (pow(base, a)); //Change at here
 else
 return 1;
}
