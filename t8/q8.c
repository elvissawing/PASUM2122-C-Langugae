#include<stdio.h>
#include<string.h>
int main()
{
   char pass[10], ch;

   do
   {
    printf("Enter your password\n");
    gets(pass);

     if(strcmp(pass, "pasum21")==0||strcmp(pass, "pasum22")==0)
      {
        printf("\nYour password VALID\n");
        printf("----------------------\n");
      }
     else
     {
        printf("WRONG password\n");
        printf("--------------\n");
     }

    printf("Do you want to check again (Enter Y/y): ");
    scanf(" %c", &ch);
    printf("\n");
    getchar();
   }while (ch=='Y'||ch=='y');


 printf("END PROGRAM\nThank You!\n");
 return 0;
}
