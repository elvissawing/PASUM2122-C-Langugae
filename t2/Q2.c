#include<stdio.h>
#define PI 3.14159
int main()
{
    float rad,vol;


    printf("Enter the value of the radius: ");
    scanf("%f",&rad);
    vol=(4*PI*rad*rad*rad)/3 ;
    printf("Volume of sphere with radius of %f is %f\n",rad,vol);

    return 0;
}
