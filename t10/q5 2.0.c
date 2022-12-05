#include<stdio.h>
void num(int ikmal , int hakim);
int main()
{
    int n,p=1;
    printf("Saya Ikmal, Masukkan Nombor :");
    scanf("%d",&n);
    num(n,p);
    return 0;
}
     void num(int n , int p)
{
if(n>p)
{
    printf("%d\t",p);
    num(n,p+1);
}
else
{
    printf("%d\t",n);
}
}
