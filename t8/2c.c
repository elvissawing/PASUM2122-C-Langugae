#include<stdio.h>
int main()
{
  int i,j=10,a=10;

  for(i=1;i<=a;i++)
  {
 printf("\n");

    for(j=1;j<=i;j++)
    {
      printf(" ");
    }
    for(j=1;j<=(a-i+1);j++)
    {
      printf("*");
    }
  }
  return 0;
}


