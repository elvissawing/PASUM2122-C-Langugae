#include<stdio.h>

int main(void)

{int pin, npin;

printf("set your new 4 digit PIN :");

scanf("%d",&pin);

do{

printf("Please reconfirm your new PIN :");

scanf("%d",&npin);} while (npin!=pin);

printf("congratulation,you have succesfully changed your PIN\n");

printf("Please select yout menu or exit\n");

printf("THANK YOU");

return 0;}
