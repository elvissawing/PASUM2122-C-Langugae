#include<stdio.h>
int main()
{
    int a;

    printf("Enter the integer : ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("The integer is even \n");

    }
    else
        printf("The integer is odd \n");
    return 0;
}
