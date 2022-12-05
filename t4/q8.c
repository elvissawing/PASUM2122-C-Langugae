#include <stdio.h>
int main()
{
float cough, flu, fever;
printf("Please answer the question correctly\n");
printf("Do you have a cough? (Type 0 for No, 1 for Yes)");
scanf("%f",&cough);
printf("Do you have a flu? (Type 0 for No, 1 for   Yes)");
scanf("%f",&flu);
printf("Do you have a fever? (Type 0 for No, 1 for Yes)");
scanf("%f",&fever);
if(cough==1&&flu==1&&fever==1)
{
    printf("Please see the doctor immediately");
}
else if(cough==1&&flu==1&&fever==0)
{
    printf("Please take cough and flu medicines");
}
else
{
    printf("Please drink a lot of water and take some rest");
}
return 0;
}
