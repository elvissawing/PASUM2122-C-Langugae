#include <stdio.h>
float KE(float,float);
int main()
{
float kg,mps, k_e;
printf("Enter the mass of the object in kg: ");
scanf("%f",&kg);
printf("Enter the velocity of the object in meter per second: "); scanf("%f",&mps);
k_e=KE(kg,mps);
printf("The kinetic energy of the object is %.2f Joules\n",k_e);
return 0;
}

float KE(float m, float v)
{
return 0.5*m*v*v;
}
