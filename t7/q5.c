#include<stdio.h>
int main()
{
    int score,sum=0,k=0;
    float average;
        printf("Enter the test scores, -99 to quit: ");
    scanf("%d",&score);
    while(score!=-99)
        {
        k++;
        sum=sum+score;
        average=sum/k;
    printf("Enter the test scores, -99 to quit: ");
    scanf("%d",&score);
        }
        printf("There are %d integers have been entered.\n",k);
        printf("Average of the integers is %.2f\n",average);
        return 0;
}
