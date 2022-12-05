// find the value  of volume and surface area of the cylinder using multiple macro arguments

#include<stdio.h>
#define PI 3.14159
#define vol(rad,height) (PI*rad*rad*height)
#define sur_area(rad,height) (2*PI*rad*height+2*PI*rad*rad)

int main()
{
    float r,h ;

    printf("Enter the value of radius : \n");
    scanf("%f",&r);
    printf("Enter the value of height : \n");
    scanf("%f",&h);

    printf("The volume of the cylinder is %f \n",vol(r,h));
    printf("The surface area of the cylinder is %f",sur_area(r,h));
    return 0;
}
