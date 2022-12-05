#include<stdio.h>
#include<math.h>
#define e 1.602177E-19
#define eo 8.854187E-12
#define aB 5.291772E-11
#define pi 3.141592653589793238
double calc(int i, double k);
int main()
{
    int i;
    double En[50], k;
    k = (e*e)/(4*pi*eo);
    for(i=0;i<50;i++)
    {
        En[i]=calc(i,k);
    }
    for(i=0;i<50;i++)
    {
        printf("En[%d] \t= %4E\n", i, En[i]);
    }

    return 0;
}
double calc(int i, double k)
{
    return -1*k/(2*aB*pow((i+0.5),2));
}
