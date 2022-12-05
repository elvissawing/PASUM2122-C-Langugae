#include <stdio.h>
int main()
{
  float sales,commission, earnings,sum_sales,sum_earnings;
  int salesman=0;

  commission = sales / 100 * 9;
    earnings = commission + 200;

  while(sales!=-1)
    {
    printf( "Enter sales in Ringgit ( -1 to end ): " );
    scanf( "%f", &sales );

    salesman++;

    printf( "The salary of salesman %d is RM%.2f\n", salesman,earnings );

    }
    return 0;

    }







