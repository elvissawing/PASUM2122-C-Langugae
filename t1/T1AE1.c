//Program to calculate average of five floating point numbers entered by users.
#include <stdio.h>
int main()
{
    float num;
    float sum, i;
    float average;
    printf("Enter five floating point numbers: ");

    for(i=0; i<5; i++)// Loop for 5 times
        {
        scanf("%f", &num); // Read number
        sum = sum + num;   // Add into 'sum'
    }

    average = sum/(float)5;

    printf("Average = %f\n", average);

    return 0;
}
