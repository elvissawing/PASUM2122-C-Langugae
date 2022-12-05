//Solution sir

#include <stdio.h>
#include<math.h>
float s(float); float v(float); float a(float); int main()
{
float t;
printf("Time Position Velocity Acceleration\n"); for (t =0.0; t<1.6; t=t+0.1)
{
printf("%-10.1f%-10.2f%-10.2f%10.2f\n",t,s(t),v(t),a(t));
}
return 0;
}
float s(float t)
{
return (3*pow(t,2)+8*t-2*pow(t,2.5));
}
float v(float t)
{
return (6*t+8-5*pow(t,1.5));
}
float a(float t)
{
return 6-15.0/2.0*pow(t,0.5);
}


