#include<stdio.h>
#include<math.h>
float sine(float,float);
float cosine(float,float);
float summation(int,int,float);
float factorial (float);
int main ()
{
    float x;
    int n,a;
    again:
    printf("--------------------------------------------------------------------------------\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("This Programme can calculate value of Sine and Cosine\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("1: Sine(x):\n2: Cosine(x):\nEnter Here:  ");
    scanf("%d",&a);
    if(a!=1 && a!=2)
    goto again;
    printf("\nEnter Positive Integer N:");
    scanf("%d",&n);
    printf("Enter the floating point of angle in radian:");
    scanf("%f",&x);
    if (a==1)
    {
        printf("\nsine(%.2f) = %.3f",x,summation(n,a,x));
        printf("\n--------------------------------------------------------------------------------");
    }
    else
    {
        printf("\nCosine(%.2f) = %.3f",x,summation(n,a,x));
        printf("\n--------------------------------------------------------------------------------");
    }

}
float summation (int n,int a,float x)
{
    float sum = 0;
    float k;
    if(a==1)
    {
        for (k=0;k<=n;k++)
        sum = sum + sine(k,x);
    }
    else
    {
        for(k=0;k<=n;k++)
        sum = sum + cosine(k,x);
    }
    return sum;
}
float sine(float k, float x)
{
    float sin;
    sin =(pow(x,(2*k+1)*(pow(-1,k))/factorial(2*k+1)));
    return sin;
}
float cosine(float k,float x)
{
    float cosin;
    cosin = ((pow(x,(2*k))*pow(-1,k)/factorial(2*k)));
    return cosin;
}
float factorial(float z)
{
    double i,fact=1;
    for(i=z;i>=1;i--)
    {
        fact = i * fact;
    }
    return fact;
}
