#include <stdio.h>
void displayNumbers(int num[4][4],int total);
int sum(int num[4][4]);
int main()
{
    int num[4][4],total;
    printf("Enter 16 numbers:\n");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("Enter numbers a[%d][%d]:\n",i,j);
            scanf("%d", &num[i][j]);
        }
    }
    total = sum(num);
    displayNumbers(num,total);
    return 0;
}
void displayNumbers(int num[4][4],int total)
{
    printf("\n\n\tmatrix:\n");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("\t");
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }
    printf("\tthe sum of elements is %d",total);
}
int sum(int num[4][4])
{
    int total = 0;
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if((num[i][j]%3==0)||(num[i][j]%7==0))
            {
                total += num[i][j];
            }
        }
    }
    return total;
}
