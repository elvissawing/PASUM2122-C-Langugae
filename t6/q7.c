#include <stdio.h>
#define REFOREST_RATE  0.02



int main()

{

   int year=0;

   double UNCUT_ACRES=2500;

   double MAX_ACRES=14000;

   double forested = UNCUT_ACRES, acres=UNCUT_ACRES-1;



   printf("MAXIMUM number of acres to reforest: %.0lf\n",MAX_ACRES);

   printf("MINIMUM number of acres: %.0lf\n",UNCUT_ACRES);



   while ((acres>MAX_ACRES) || (acres<UNCUT_ACRES))

   {

       printf("Enter acres to be reforested: ");

       scanf("%lf",&acres);

   }
   printf("\nYEAR     FORESTED ACRES AT END OF YEAR \n");

   printf("-------------------------------------- \n");

   while (forested <= acres)

   {
        printf("%5d          %7.2lf\n",year,forested);

        forested += REFOREST_RATE*forested;

        year++;

   }

   printf("\nUp to %d years are required to reforest %.2lf acres\n",year,acres);

return 0;

}
