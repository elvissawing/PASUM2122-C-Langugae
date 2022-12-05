/**************************************************
 Program to calculate Permutation and Combination
 *
 * Enter n: 10
 * Enter r: 4
 * Permutation = 5040
 * Combination = 210
 ***************************************************/

#include<stdio.h>
long permutation(int n, int r);
long factorial(int num);

int main(void)
{
    int n, r;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    printf("nPr = %ld\n", permutation(n, r));

    return 0; // return 0 to operating system
}

long permutation(int n, int r)
{
    return factorial(n) / factorial(n-r);
}

long factorial(int num)
{
    long long fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}
