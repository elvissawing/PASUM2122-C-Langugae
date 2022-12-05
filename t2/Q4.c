#include<stdio.h>
#define PRINT(msg) #msg
#define TEXT(text) #text


int main()
{
    int r;

    printf("Enter the error : ");
    scanf("%d",&r);

    if(r==0)
        {
        printf(PRINT(Congratulations you succeeded));
        }
    else
        {
        printf(TEXT(Sorry you failed));
        }
    return 0;

}
