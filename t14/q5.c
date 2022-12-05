#include<stdio.h>
int main()
{
    int c,r;
    int total;
    int matrix[3][4];

    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {

            printf("Please enter the value for [%d][%d]=",r+1,c+1);
            scanf("%d",&matrix[r][c]);
            total+=matrix [r][c];

        }
    }
    printf("\nThe Array is :\n");

    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {printf("%d\t",matrix[r][c]);

    }
     printf("\n");
    }

    printf("\nThe Sum of the elements is %d\n",total);
    return 0;
}

