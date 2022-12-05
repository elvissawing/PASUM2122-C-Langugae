#include <stdio.h>
int Smiley (int n);

int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
printf("Total: %d", Smiley (num));
return 0;
}

int Smiley (int n)      //Sub program
{
if (n == 0)
return 3;
else
   return n + Smiley(n-1);
}

