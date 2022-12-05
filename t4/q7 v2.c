#include<stdio.h>
int main()
{
    int A,B,X;

    printf("Please Enter Number for A: ");
    scanf("%d",&A);
    printf("Please Enter Number for B: ");
    scanf("%d",&B);

    if(A<B)
    {
     if(A<10)
        X=A+B;
     else
        X=B-A;
    }
    else if(B<5)
        X=A*B;
    else if(A<15)
        X=A*A;
    else
        X=B*B;

    printf("X value is %d \n", X);
    return 0;
}
