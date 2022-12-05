#include <stdio.h>
 #define CHARACTER(a,b) a##b
int main()
 {

     char crt1,crt2,crt3,crt4,crt5;

     printf("\n Input Character 1:");
     crt1=getch();
     putch(crt1);
     printf("\n Input Character 2:");
     crt2=getch();
     putch(crt2);
     printf("\n Input Character 3:");
     crt3=getch();
     putch(crt3);
     printf("\n Input Character 4:");
     crt4=getch();
     putch(crt4);
     printf("\n Input Character 5:");
     crt5=getch();
     putch(crt5);

printf("\n");

     printf("\n *******************");

     printf("\n Your sign is %c",CHARACTER(crt,1));
     printf("%c",CHARACTER(crt,2));
     printf("%c",CHARACTER(crt,3));
     printf("%c",CHARACTER(crt,4));
     printf("%c",CHARACTER(crt,5));

     printf("\n *******************");

     return 0;
 }
