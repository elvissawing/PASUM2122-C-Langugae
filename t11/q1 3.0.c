//where n is the number of things to choose from, and we choose r from n.
//Develop a C program source code to compute the given formula using recursion. Prompts the user to enter an integer for both n and r, respectively. Make sure that r <= n, n >= 0 and r >=0.
#include<stdio.h>
int fact(int n);

int main()
{
    int x, y;
    printf("Please Input The Value of n and r\n");
    scanf("%d%d", &x, &y);
    if((y>x) || (y<0) || (x<0))
    {
        printf("MATH ERROR\n");
    }
    else
    {
        printf("The Number of Possible Permutation When n is %d and r is %d    :%d", x, y, (fact(x)/fact(x-y)));
    }
    return 0;
}
int fact(int n)
{

    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}
