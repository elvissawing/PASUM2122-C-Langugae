#include <stdio.h>
int main(void)
{
 int num,a,sum=0;
 float average;
 for(a=1;a<=10;a++)
 {
 printf("Enter number : ");
 scanf("%d",&num);
 if(num<0)
 break;
 sum +=num;
 average=sum/a;
 }
 printf("sum = %d\n",sum);
 printf("average = %.2f",average);
 return 0;
}
