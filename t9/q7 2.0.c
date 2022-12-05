#include<stdio.h>
float f_function(float,float); float g_function(float,float);
void printFunction (int , float ,float ,float); int main (void)
{
int func;
float i,j,result;
//printf("Given two equations:\nf(x)=3x+5\ng(x)=4x+8\n\n"); printf("0 to exit the program\n1 for f(x,y)=x^2+y^2-2x+8y-8\n2 for g(x,y)=1/36*(x-6)^2+1/16*(y+4)^2-1\n");
printf("\nPlease choose your function: "); scanf("%d",&func);
// printf("\n"); while(func==1 || func==2)
{
printf("Enter the value of x and y:\n"); printf("x = ");
scanf("%f",&i);
printf("y = ");
scanf("%f",&j); if(func == 1){
result = f_function(i,j);
}
if(func== 2){
result= g_function(i,j);
}
printFunction(func,i,j,result);
printf("0 to exit the program\n1 for f(x,y)=x^2+y^2-2x+8y-8\n2 for g(x,y)=1/36*(x-6)^2+1/16*(y+4)^2-1\n");
printf("\nPlease choose your function: "); scanf("%d",&func);
}
if(func!=1||func!=2)
printf("You wished to exit. Thank you\n"); return 0;
}
float f_function(float x,float y)
{
return x*x+y*y-2*x+8*y-8;
}
float g_function(float x, float y)
{
return (pow(x-6,2)/36+pow(y+4,2)/16-1);
}
void printFunction(int func,float i,float j,float R)

{
if(func == 1)
printf("The value of f(x,y) when x = %.1f and y = %.1f is: %.1f\n\n",i,j, R);
else
printf("The value of g(x,y) when x = %.1f and y = %.1f is: %.1f\n\n",i,j, R);
return;
}
