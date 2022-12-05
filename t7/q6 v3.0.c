#include<stdio.h>
int main()
{
    int a=1;
    float salary,sales,sum_sal,sum_sales,com;

    printf("*** Weekly Earnings in KuKuKu Water Filter Sdn Bhd ****\n");

    printf("\nEnter sales in Ringgit (-1 to end): ");
    scanf("%f",&sales);

    while(sales!=-1)
    {
        com=sales/100*9;
        salary=200+com;
        printf("The salary of salesman %d is RM%.2f\n",a,salary);
        a++;
        sum_sal += salary;
        sum_sales += sales;
        printf("\nEnter sales in Ringgit (-1 to end): ");
        scanf("%f",&sales);
    }

    printf("\nAll salesman processed.\n");
    printf("Total sales are RM %.2f\n",sum_sales);
    printf("Total payroll is RM %.2f",sum_sal);

    return 0;
}
