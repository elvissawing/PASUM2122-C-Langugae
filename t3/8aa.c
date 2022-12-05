#include<stdio.h>
int main(void)
{
    float Mth_Sal,Mth_Exp,Tot_Sal,Tot_Exp,Ann_Sav;

    puts("Enter your monthly salary :");
    gets("Mth_Sal");
    puts("Enter your monthly expenses:");
    gets("Mth_Exp");

    Tot_Sal=Mth_Sal*12 ;
    Tot_Exp=Mth_Exp*12 ;
    Ann_Sav=Tot_Sal-Tot_Exp ;

    printf("\n Annual Total Saving : RM %.2f",Ann_Sav);

    return 0;


}
