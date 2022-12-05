#include<stdio.h>
 float position(float m);
float velocity(float f);
float acceleration(float g);
int main()
{
float t,s,v,a;
int n;
printf("Time\t\tPosition\tVelocity\tAcceleration\n"); for(n=0;n<=15;n++)
{
s=position(t);
v=velocity(t); a=acceleration(t); printf("\n%1.1f\t\t%6.2f\t\t%6.2f\t\t%8.2f",t,s,v,a);
t+=0.1;
if(velocity(t)>0) printf("\tMoving to the right with ");
else printf("\tMoving to the left with ");
if(acceleration(t)>0) printf("increasing velocity");
else printf("decreasing velocity");
}
return 0;
}
float position(float m)
{
return (3*pow(m,2)+8*m-2*pow(m,2.5));
}
float velocity(float f)
{
return (-5*pow(f,1.5)+6*f+8);
}
float acceleration(float g)
{
return (-7.5*sqrt(g)+6);
}

