#include<stdio.h>
int main()
{
    int i=1;
    float commision,gross,sum_com,sum_gross,rate;
    printf("* Weekly Earnings in KuKuKu Water Filter Sdn Bhd *\n");
    printf("Enter sales in Ringgit (-1 to end): ");
    scanf("%f",&gross);
    while(gross!=(-1))
    {
        rate = 0.09*gross;
        commision = 200+rate;
        printf("The salary of salesman %d is RM%.2f\n",i,commision);
        i++;
        sum_com += commision;
        sum_gross += gross;
        printf("Enter sales in Ringgit (-1 to end): ");
        scanf("%f",&gross);
    }
    printf("All salesman processed.\n");
    printf("Total sales are RM %.2f\n",sum_gross);
    printf("Total payroll is RM %.2f",sum_com);
    return 0;
}
