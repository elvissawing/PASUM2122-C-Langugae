#include<stdio.h>

int gcd(int n1, int n2);

    int main()
    {
        int num1, num2;

        printf("Enter 2 positive integer numbers\n");
        scanf("%d%d", &num1, &num2);

        printf("\nGCD of %d and %d is %d \n", num1, num2, gcd(num1, num2));

        return 0;
    }

    int gcd(int n1, int n2)
    {
        if(n1 == n2) return n2;

        else if(n1 > n2)
            return gcd(n1-n2, n2);
        else
            return gcd(n1, n2-n1);
    }

