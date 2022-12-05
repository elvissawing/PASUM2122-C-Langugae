#include <stdio.h>
#include <math.h>

int main(void)
{
    double U, sum, PI;
    int n, k, opt;
    PI = 4.0*atan(1.0);
    printf("%lf\n",PI);
    do
    {  printf("Enter value U\n");
       scanf("%lf",&U);
        if ( U >= -1.0 && U <= 1.00)
             { printf("Enter value n\n");
               scanf("%d",&n);
               printf(" Choose whether u want 1: atan(U) or 2: atanh(U)   --->(opt)\n");
               scanf("%d",&opt);
               if (opt == 1)
                      { sum = 0;
                            for( k =0; k<=n;k++)
                             {  sum = sum + (pow((-1),k)*pow(U,(2*k+1)))/(2*k+1);
                                printf("%.8lf\n", sum);
                             }
                            printf("Final ans===> atan(%.4lf) =%.8le rad   %.4lf deg\n",U, sum, sum*(180/PI));
                       }
                       else
                     { sum = 0;
                            for( k =1; k<=n;k++)
                            {  sum = sum + (pow(U,2*k-1))/(2*k-1);
                             printf ("%.8lf\n", sum);
                             }printf("Final ans===> atanh(%.4lf) =%.8le rad    %.4lf deg\n",U, sum, sum*(180/PI));
                     }
             }
         else
               {printf(" Your U is not between the range [-1,1]\n");
               printf(" please try again\n");
               }

    }while( fabs(U) > 1.0);

   printf("%lf\n",fabs(U));

return 0;}
