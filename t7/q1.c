#include<stdio.h>
int main ()
{
 int num;
 printf("Enter a number:\n");
 scanf("%d",&num);
 if(num%2==0 && num>9)
 {
     if(num>=10&&num<100)
         printf("The place value of digit is TENs\n");
 else if(num>=100&&num<1000)
    printf("The place value of digit is HUNDREDs\n");
 else if(num>=1000&&num<10000)
     printf("The place value of digit is THOUSANDs\n");
     else if (num>=10000&&num<100000)
        printf("The place value of digit is TENs of THOUSANDs\n");
        else
            printf("Out of range\n");
}
 else
 printf("ERROR\n");
     return 0;
}
