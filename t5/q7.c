#include <stdio.h>
int main()
{
 int a=0,sum=0;
 loop:
 a+=2;
 printf("%d\t",a);
 sum+=a;
 if(a<100)
 { goto loop;}
 printf("\n Sum=%d",sum);
 return 0;
}
