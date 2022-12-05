#include<stdio.h>
#include<math.h>
int main()
{
    float a[10],sum,total=0,sum2=0,total2=0;
    int i,n;

    i=0;
    while (i<=9)
    {
        printf("Input for a[%d]= ",i);
        scanf("%f",&a[i]);
        i++;
    }

    i=0;
    do
    {
        sum =a[(2*i)];
        total = total + sum;

        printf(" a[%d] ",(2*i));
        if (i<4)
            printf("+");
        i++;
    }
    while (i<=4);

    printf("=");

    i=0;
    do
    {
        printf("%.2f ",a[2*i]);
        if (i<4)
            printf("+");
        i++;

    }
 while (i<=4);

    printf("=");

    printf(" %.2f\n",total);

    i=0;
    while (i<=4)
    {
        printf("a[%d] ",(2*i)+1);
        if (i<4)
            printf("+");

        sum2 = a[(2*i)+1];
        total2 =total2 + sum2;
        i++;
    }

    printf("=");

    i=0;
    while(i<=4)
    {
        printf(" %.2f ",a[(2*i)+1]);
        if (i<4)
            printf("+");
    i++;
    }
    printf("=");
    printf(" %.2f",total2);
    return 0;
}
