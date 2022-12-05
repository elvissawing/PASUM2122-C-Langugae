#include<stdio.h>
#include<string.h>
int main(void)
{
    char ch3[10],x;

    do
    {
       printf("Enter your password\n");
       scanf("%s",&ch3);

       if(strcmp(ch3,"pasum21")==0||strcmp(ch3,"pasum22")==0)
       {
           printf("\n\nYour password VALID");
           printf("\n-------------------");
           printf("\nDo you want to check again (Enter Y/y): ");
           scanf("%s",&x);
           printf("\n\n");
       }
        else
        {
           printf("\n\nWRONG password");
           printf("\n----------------");
           printf("\nDo you want to check again (Enter Y/y): ");
           scanf("%s",&x);
           printf("\n\n");
        }
    }
    while(x=='Y'||x=='y');

    printf("END PROGRAM\nThank You!");

    return 0;
}
