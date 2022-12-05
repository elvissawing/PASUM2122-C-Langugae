#include<stdio.h>
 float sum(float a,int b);
 int main()
 {
     int N;
     float x;
     printf("Enter number of integers,N : ");
     scanf("%d",&N);

     table1:
    printf("Enter the value of x, -1<x<1 : ");
    scanf("%f",&x);

    if (x<=-1 || x>=1)
        {
        printf("Please Try Again\n\n");
        goto table1;
        }

   printf("The sum until %d is %.3f",N,sum(x,N));
       return 0;
 }
 float sum(float a,int b)
{
    if (b==0)
        return 1;
    else
        return((pow(a,b))+ (sum(a,b-1)));
}
