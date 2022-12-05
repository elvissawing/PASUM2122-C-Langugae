#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,operation;
    choose:
    printf("Choose an Operation\n 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d", &operation);

    if(operation < 1 || operation >4)
    {printf("CHOOSE CAREFULLY\n");
    goto choose;}

    printf("\n");
    printf("Input number of data\n");
    scanf("%d", &j);
    float k, a[j], b[j], add[j], minus[j], times[j], div[j];
    switch(operation)
    {
case 1: for(i=0;i<j;i++)
                {
                    printf("Insert The Value of: a[%d] and b[%d]\n", i, i);
                    scanf("%f %f", &a[i], &b[i]);
                }
                for(i=0;i<j;i++)
                {
                    add[i]= a[i] + b[i];
                    printf("Sum[%d] is : %.0f\n", i, add[i]);
                }
                break;

        case 2:for(i=0;i<j;i++)
                {
                    printf("Insert The Value of: a[%d] and b[%d]\n", i, i);
                    scanf("%f %f", &a[i], &b[i]);
                }
                for(i=0;i<j;i++)
                {
                    minus[i]= a[i] - b[i];
                    printf("Substraction[%d] is : %.0f\n", i, minus[i]);
                }
break;
        case 3: for(i=0;i<j;i++)
                {
                    printf("Insert value of: a[%d]\n", i);
                    scanf("%f", &a[i]);
                }
                printf("What is the scalar value\n");
                scanf("%f", &k);
                for(i=0;i<j;i++)
                {
                    times[i]= a[i]*k;
                    printf("Multiplication[%d] is : %.2f\n", i,times[i]);
                }
                break;

        case 4: for(i=0;i<j;i++)
                {
                    printf("Insert value of: a[%d]\n", i);
                    scanf("%f", &a[i]);
                }
                printf("What is the scalar value\n");
                scanf("%f", &k);
                for(i=0;i<j;i++)
                {
                    div[i]= a[i]/k;
                    printf("Division[%d] is : %.2f\n", i,div[i]);
                }
                break;
    }
    return 0;
}

