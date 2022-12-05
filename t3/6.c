#include <stdio.h>
int main(void)

{
    char name[99],date[60],address[99],food[60];

    puts("Enter your full name : ");
    gets(name);
    puts("Enter your date of Birth :");
    gets(date);
    puts("Enter your current address:");
    gets(address);
    puts("Enter your favourite food:");
    gets(food);

    puts("Your details are:");
    puts(name);
    puts(date);
    puts(address);
    puts(food);

    return 0;




}
