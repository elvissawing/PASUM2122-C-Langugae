#include <stdio.h>
#include<math.h>
double sD (double s1, double s2, double s3, double s4,double a);
double average (double s1, double s2, double s3, double s4);

int main()
{
double s1, s2, s3, s4, avg, stdDev; char ans;

printf("Press Y to enter the program or press any button to exit: ");
scanf("%c",&ans);

while ( 'Y' == ans || 'y' == ans )
{
printf("Enter 4 decimal numbers,I will give you the mean "); printf("and standard deviation of the data\n"); scanf("%lf%lf%lf%lf",&s1,&s2,&s3,&s4);

avg = average( s1, s2, s3, s4); stdDev = sD( s1, s2, s3, s4,avg);

printf("Mean of %.2lf, %.2lf, %.2lf and %.2lf is %.2lf\n",s1,s2,s3,s4,avg);
printf("The standard deviation of these numbers is %lf\n",stdDev);
printf("Press Y to enter the program or press any button to exit:");

}

scanf("%c",&ans);

return 0;

}
double average (double s1, double s2, double s3, double s4)
{
return ( s1 + s2 + s3 + s4 ) / 4;
}
double sD (double s1, double s2, double s3, double s4,double a)
{

return sqrt((s1 - a)(s1 - a) + (s2 - a)(s2 - a) + (s3 - a)(s3 - a) + (s4 - a)(s4 - a))/3;

}
