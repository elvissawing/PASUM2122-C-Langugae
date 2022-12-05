#include <stdio.h>

int fact(int n);

void main()
{
 int n,r,npr;

  	printf("Enter a number n:");
  	scanf("%d",&n);
 printf("Enter a number r:");
  	scanf("%d",&r);
  	npr=fact(n)/fact(n-r);
  	if((r>n) || (n<0) || (r<0))
    {
        printf("MATH ERROR\n");
    }
    else
    {
        printf("Value of %dP%d = %d\n",n,r,npr);
    }
}

int fact(int n)
{
    int r,f=1;
    for(r=1;r<=n;r++)
    {
        f=f*r;
    }
    return f;
}
