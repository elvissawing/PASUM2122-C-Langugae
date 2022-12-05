#include<stdio.h>
int main()
{
    int i,j,k;

for (i=1; i<=10; i++)
{
    for (j =1; j<=i-1; j++)
   {
       printf(" ");
    }
         for (k=1; k<=11-i; i++)
        {
          printf("*");
         }
        printf("\n");
}
    return 0;
}
