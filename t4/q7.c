#include <stdio.h>
int main ()
{
    int a,b,x;

    printf("Enter A and B: \n");
    scanf("%d %d",&a,&b);

    if(a<b && a<10)
    {
        x=a+b;
    }
    else if(a<b && 10<=a)
    {
        x=b-a;
    }
    else if(b<=a && b<5)
    {
        x=a*b;
    }
    else if(b<=a && 5<=b && a<15)
    {
        x=a*a;
    }
    else if(b<=a && 5<=b && 15<=a)
    {
        x=b*b;
    }

    printf("X = %d",x);
    return 0;
}
