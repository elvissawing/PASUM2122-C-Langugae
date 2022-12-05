#include<stdio.h>
int main()
{
    int nl=1,t,p=10;

    while(nl<=10){
     t=1;
     while(t<=p){
        printf("*");
        t++;
     }
     printf("\n");
     nl++;
     p--;
    }
    return 0;
}
