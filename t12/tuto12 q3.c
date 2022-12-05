#include<stdio.h>
#include<math.h>

int main()
{
    int elements,i,operation,k;
    float num[i],num1[i],total[i];

    printf("enter how many number do you want :");  //user elements
    scanf("%d",&elements);

    for(i=0;i<elements;i++)   //looping for user input
    {
    printf("num[%d] = ",i);
    scanf("%f",&num[i]);
    }
    printf("\n\n\n\n");
    for(i=0;i<elements;i++)   //looping for user input
    {
    printf("num1[%d] = ",i);
    scanf("%f",&num1[i]);
    }
    //user choose the operation
    printf("\n\n\n\n");
    printf("please choose the operation\n");
    printf("enter 1 if you choose addition\n");
    printf("enter 2 if you choose subtraction\n");
    printf("enter 3 if you choose multiplication\n");
    printf("enter 4 if you choose division\n");

    scanf("%d",&operation);
    //operation
    if(operation==1)//addition
    {
        for(i=0;i<elements;i++)
        {
            total[i]=num[i]+num1[i];
            printf("the result is %.2f\n",total[i]);
        }
    }
    else if(operation==2)//substraction
    {
        for(i=0;i<elements;i++)
        {
            total[i]=num[i]-num1[i];
            printf("the result is %.2f\n",total[i]);
        }

    }
    else if(operation==3)//product
    {
        printf("please insert scalar k");
        scanf("%d",&k);
        for(i=0;i<elements;i++)
        {
            total[i]=k*num1[i];
            printf("the result is %.2f\n",total[i]);
        }

    }
    else if(operation==4)//division
    {
        printf("please insert scalar k");
        scanf("%d",&k);
        for(i=0;i<elements;i++)
        {
            total[i]=num[i]/k;
            printf("the result is %.2f\n",total[i]);
        }

    }
    else
        printf("sorry your input is not available");
        goto again;
    //goto label
    again:
        scanf("%d",&operation);


    return 0;
}
