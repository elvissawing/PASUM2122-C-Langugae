#include<stdio.h>
int main()

{
    int nl=1,t,p=1;

    while(nl<=10){
     t=1;
     while(t<=p){
        printf("*");
        t++;
     }
     printf("\n");
     nl++;
     p++;
    }
    return 0;
}
