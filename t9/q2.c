#include<stdio.h>
double half(double);

    int main()
{
    double result, number;
        printf("Enter a number: ");
        scanf("%lf",&number);
        result=half(number);
        printf("Half of the number entered is %lf",result);

}

double half(double number)
{
    return number/2;
}
