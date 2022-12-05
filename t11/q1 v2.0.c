#include<stdio.h>
int perm(int n)
int main(void)
{
    int res , n, r;

    printf("FORMULA FOR PERMUTATION");
    start:
    printf("\n\nEnter a positive integer for n: ");
    scanf("%d",&n);
    printf("Enter a positive integer for r: ");
    scanf("%d",&r);

if(n<0)
        {
          printf("Math error\n");
          goto start;
        }
    else if(r<0)
        {
          printf("Math error\n");
          goto start;
        }
    else if(r>n)
        {
          printf("Math error\n");
          goto start;
        }


     res=perm(n)/perm(n-r);

     printf("ans: %d", res);

     return 0;
}
