#include <stdio.h>

int main()
{
    int i;
    char ch;
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter a single character >> ");
        ch = getchar();
        putchar(ch);
        getchar();
    }

    return 0;
}

