#include <stdio.h>
int main(void)
{
 int class_t,hour_e,hour_l,min_e,min_l,hour,min,rounded;
 float charge;
 printf("Enter the class of vehicle? ");
 scanf("%d",&class_t);
 printf("Hour vehicle entered lot (0-24)?\t ");
 scanf("%d",&hour_e);
 printf("Minute vehicle entered lot (0-60)?\t ");
 scanf("%d",&min_e);
 printf("Hour vehicle left lot (0-24)?\t ");
 scanf("%d",&hour_l);
 printf("Minute vehicle left lot (0-60)?\t ");
 scanf("%d",&min_l);
 printf("\n Class of vehicle: %d\n",class_t);
 printf("TIME-IN %d : %d\n",hour_e,min_e);
 printf("TIME-OUT %d : %d\n",hour_l,min_l);
 printf(" -----------\n");
 if(min_l<min_e)

 {min_l=min_l+60;
 hour_l+hour_l-1;}
 hour=hour_l-hour_e;
 min=min_l-min_e;

 if(min>30)
 rounded=hour+1;
 else
 rounded=hour;

 printf("PARKING TIME %2d : %2d\n",hour,min);
 printf("ROUNDED PARKING TIME %d hours\n",rounded);
 switch(class_t)
 {
 case 1 :
if(rounded<=3)

charge=rounded*1;
 else

charge=(rounded-3)*1.5+3;
 break;
 case 2 :
if(rounded<=2)

charge=rounded*2;
 else
charge=(rounded-2)*2.5+4;
 break;
 case 3 :
if(rounded<=1)

charge=rounded*2.50;
 else
charge=(rounded-1)*3.70+2.50;
 break;
 }
 printf("TOTAL CHARGES\t $ %.2f\n",charge);
 return 0;
}
