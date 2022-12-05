#include <stdio.h>
#define REFOREST_RATE  0.02
#define UNCUT_ACRES  2500
#define MAX_YEARS  20

int main()

{

   int year=0;

   double forested = UNCUT_ACRES;



   printf("YEAR     FORESTED ACRES AT END OF YEAR\n");

   printf("--------------------------------------\n");



   while (year <= MAX_YEARS)

   {

      printf("%5d          %7.2lf\n",year,forested);

      forested += REFOREST_RATE*forested;

      year++;

   }

   return 0;

}
