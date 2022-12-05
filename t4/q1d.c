#include<stdio.h>
int main()
{
    int x=4, y=8;
printf("4&8 = %d\n",x&y); //0000=0
printf("4|8 = %d\n",x|y); //1100=12
printf("4^8 = %d\n",x^y); //1100=12
printf("4<<1 = %d\n",x<<1); //1000=8
printf("8<<1 = %d\n",y<<1); //10000=16
printf("8<<2 = %d\n",y<<2); //100000=32
return 0;
}
