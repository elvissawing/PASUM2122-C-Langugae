#include<stdio.h>
int main ()
{
    float farenheit=0;
    float celsius;
    printf("Farenheit to Celsius in 5-degree increments \n\n");
    printf("%10s%10s\n","Farenheit","Celsius");
    while(farenheit<=100)
    {
        celsius=(5.0/9.0)*(farenheit-32);
        printf("%10.1f%10.1f\n",farenheit,celsius);
        farenheit+=5;
    }
    return 0;
}
