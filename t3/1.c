#include<stdio.h>
int main(void)
{

    int a= 5674, b=066666, c= 0xcdef2;

    printf("%d\n",a);
    printf("%+d\n",a);
    printf("%.6d\n",a);
    printf("%06d\n",a);
    printf("%+06d\n",a);
    printf(" %d\n",c);
    printf("%x\n",c);
    printf("%#0d\n",b);
    printf("%#X\n",c);
    printf(" % d \n",a);
    printf(" %-#6x\n",a);
    printf("%#X\n",a);
    return 0;
}
