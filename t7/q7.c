#include<stdio.h>
int main()
{
    int a,box,i=0,box2=0;
    float ave;
    char b[20];
    printf("*COOKIE SALES INFORMATION*");
    LOOP:
    printf("\nPress 1 to enter program or 0 to exit: ");
    scanf("%d",&a);

    switch(a)
    {
        case 0:goto end;
        case 1:
        printf("Enter student name:");
        scanf("%s",&b);
        printf("Enter number of boxes sold by student %s:",b);
        scanf("%d",&box);
        i++;
        {
            if(box<0)
                {printf("Invalid entry.\nRe-enter number of boxes sold:");
                scanf("%d",&box);}
        }
            box2=box2+box;

        }

     goto LOOP;
     end:
            ave=box2/(float)i;
            printf("\nThe average number of boxes sold by %d student is %.2f\n",i,ave);

            return 0;
}
