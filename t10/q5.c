#include <stdio.h>
int num(int n);
int main()
{
 int n;
 n=1;
 num(n);
 return 0;
}
int num(int n)
{
 if(n<50)
 {
 printf("%d ", n);
 num(n+1);
 }
 else
 {
 printf("%d",n);
 }
}
