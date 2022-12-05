#include<stdio.h>
void display(int x[3][4]);

int main ()
{
    int n,i, sum=0;
int matrix[3][4];
    for(i=0; i<=2; i++)
    {
        for(n=0;n<=3;n++)
        {
            printf("Enter the value of a[%d][%d]: ", i,n);
            scanf("%d", &matrix[i][n]);
        }
    }
    printf("\n");

display(matrix);

    for(i=0; i<=2; i++)
    {
        for(n=0;n<=3;n++)
        {
            sum = sum + matrix[i][n];
        }
    }
    printf("\nThe sum of the elements are %d \n", sum);

}

void display(int matrix[3][4])
{
int n,i;
printf("\nThe array is : \n");
    printf("\n");
    for(i=0; i<=2; i++)
    {
        for(n=0;n<=3;n++)
        {
            printf("%d \t", matrix[i][n]);
        }
        printf("\n");
    }
}
