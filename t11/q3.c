#include<stdio.h>
#include<math.h>
int fact(int n);
void out(float x, double k, int n);
double sine(double x,int y);
double cosine(double x,int y);
int main()
{
 double x, a;
 int opt, n;
 printf("Please Choose a Function\n1. Sine(x) Function\n2. Cosine(x) Function\nYour Choice -->-->\t");
 scanf("%d", &opt);
 if(opt!=1&&opt!=2)
 {return 0;}
 printf("Please input The Value of x in Radian\n");
 scanf("%lf", &x);
 printf("Please input The Number of iteration\n");
 scanf("%d", &n);
 if(opt==1)
 {
 a=sine(x, n);
 }else
 a=cosine(x,n);
 out(x, a, opt);
 return 0;
}
int fact(int n)
{
 int ans;
 if(n==0)
 ans=1;
 else
 ans=n*fact(n-1);
 return ans;
}
double sine(double x, int y)
{
 if (x==0||y==0)
 return 0;
 else
 return -1*pow(-1,y)*pow(x,2*y-1)/fact(2*y-1) + sine(x, y
- 1);
}
double cosine(double x,int y)
{
 if (x==0||y==0)
 return 1;
 else
 return pow(-1,y)*pow(x,2*y)/fact(2*y) + cosine(x, y - 1);
}
void out(float x, double k, int n)
{
 switch(n)
 {
 case 1: printf("The value of Sine(%.4lf) is: %.4lf\n", x,k);
 break;
 case 2: printf("The value of Cosine(%.4lf) is: %.4lf\n",
x, k);
 break;
 }
}


