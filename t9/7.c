#include<stdio.h>
#include<math.h>
float One(float x,float y);
float Two(float x,float y);
void print(float x,float y,float ans);
int main()
{
float x,y,ans;
int loop;
printf("0 to exit the program\n");
printf("1 for f(x,y)=x^2+y^2-2x+8y-8\n");
printf("2 for g(x,y)=1/36(x-6)^2+1/16(y+4)^2-1\n\n");
 for(;;)
 {
 LOOP:
 printf("Please choose your function:");
 scanf("%d",&loop);
 getchar();
 if(loop==0)
 break;
 else if(loop<=2)
 {
 printf("Enter value of x and y:\nx=");
 scanf("%f",&x);
 printf("y= ");
 scanf("%f",&y);
 getchar();
 if(loop==1)
 ans=One(x,y);
 else if(loop==2)
 ans=Two(x,y);
 else
 goto LOOP;
 print(x,y,ans);
 }
 else
 goto LOOP;
 }
 printf("You wished to exit. Thank you.");

return 0;
}
float One(float x,float y)
{
 float ans;
 ans=x*x+y*y-2*x+8*y-8;
}
float Two(float x,float y)
{
 float ans;
 ans=pow(36,-1)*(x-6)*(x-6)+pow(16,-1)*(y+4)*(y+4)-1;
}
void print(float x,float y,float ans)
{
 printf("The value of f(x,y) when x = %.1f and y = %.1f is: %.1f\n",x,y,ans);
}
