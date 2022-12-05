#include<stdio.h>
int main()
{
   int numStudents;
   int numDays, student, day;    //
   float progHours, chemHours;    //
   float progTotal, chemTotal;    //
   float progAvg, chemAvg;

   printf("This program will find the average number of hours a day\n");
   printf("each given student spent on programming and on chemistry over a long weekend\n\n");

   printf("How many students are there ?  ");
   scanf("%d",&numStudents);

   printf("Enter the number of days in the long weekend: ");
   scanf("%d",&numDays);
    printf("\n");

   for( student = 1; student <= numStudents; student++)
   {
      progTotal = 0;
      chemTotal = 0;

      for(day = 1; day <= numDays; day++)
      {
          printf("Enter student %d day %d programming hrs: ",student,day);
          scanf("%f",&progHours);

          printf("Enter student %d day %d chemistry hrs: ",student,day);
          scanf("%f",&chemHours);

         progTotal = progTotal + progHours;
         chemTotal = chemTotal + chemHours;
      }

      progAvg = progTotal / numDays;
      chemAvg = chemTotal / numDays;

      printf("\nThe average number of hours per day spent programming by student %d is %.1f.",student,progAvg);
      printf("\nThe average number of hours per day spent chemistry by student %d is %.1f.\n",student,chemAvg);

      if (progAvg > chemAvg)
         printf("This student averaged more time on programming.");

      else if (progAvg < chemAvg)
         printf("This student averaged more time on chemistry.");

      else
         printf("This student spent the same amount of time on both subjects.");
    printf("\n\n");
   }

    return 0; }
