#include <stdio.h>
 #define MERGE(a,b) a##b
int main() {

     char char1,char2,char3,char4,char5;

     printf("Input Character 1: \n");
     scanf("%c",&char1);

     printf("Input Character 2: \n");
     scanf("%c",&char2);

     printf("Input Character 3: \n");
     scanf("%c",&char3);

     printf("Input Character 4: \n");
     scanf("%c",&char4);

     printf("Input Character 5: \n");
     scanf("%c",&char5);


     printf("\nYour sign is %s",MERGE(char,1));
     printf("%c",MERGE(char,2));
     printf("%c",MERGE(char,3));
     printf("%c",MERGE(char,4));
     printf("%c",MERGE(char,5));
     return 0;
 }
