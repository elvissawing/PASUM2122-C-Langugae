#include<stdio.h>
int main()
{
    int num;
   do
    {
        printf("Enter any integer:");
        scanf("%d",&num);
        num=num%2;
        if(num!=0)
            printf("Odd\n");
    }
     while(num!=0);
return 0;
}

