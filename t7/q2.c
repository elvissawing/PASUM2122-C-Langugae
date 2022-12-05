#include<stdio.h>
int main ()
{
    int a,b,c;
    char asasi;
    printf("L: Foundation in Life Sciences\nP:Foundation of Physical Sciences\n");
    printf("Make your selection ---->");
    scanf("%c",&asasi);
    switch(asasi)
    {
        case 'l':
        case 'L':
            printf("Available Departments\n 1. Department of Mthematic\n 2. Department of Science\n");
            printf("Make your selection---->");scanf("%d",&a);
            switch(a)
        {
        case 1: printf("Available Units\n 1.Mathematics\n");
        printf("Make your selection---->");
        scanf("%d",&b);
        switch(b)
        {
            case 1:printf("Available Subjects\n 1.Mathematic 1\n 2. Mathematic 2\n");
            printf("Make your selection---->");
            scanf("%d",&c);
            printf("You choose subject Mathematic %d",c);
            goto end;
        }
        case 2:printf("Available Units\n 1. Physics\n 2. Chemistry\n 3. Biology\n ");
        printf("Make your selection---->");
        scanf("%d",b);
        switch(a)
        {
            case 1:printf("Available Subjects\n 1. Physics 1\n 2. Physics 2\n");
            printf("Make your selection---->");
            scanf("%d",&c);
            printf("You choose subject Physics %d",c);
            goto end;
            case 2:printf("Available Subjects\n 1. Chemistry 1\n 2. Chemistry 2\n");
            printf("Make your selection---->");
            scanf("%d",&c);
            printf("You choose subject Chemistry %d",c);
            goto end;
            case 3:printf("Available Subjects\n 1. Biology 1\n 2. Biology 2\n");
            printf("Make your selection---->");
            scanf("%d",&c);
            printf("You choose subject Chemistry %d",c);
            goto end;
        }
    }
            case 'p':
            case 'P':
                printf("Available Departments\n 1. Department of Mathematic\n 2. Department of Science\n");
                printf("Make you selection---->");
                scanf("%d",&a);
                switch (a)
                {
                    case 1:printf("Available Units\n 1. Mathematic\n 2. Computer Science\n");
                    printf("Make your selection---->");
                    scanf("%d",&b);
                    switch(b)
                    {
                        case 1:printf("Available Subjects\n 1. Mathematic 1\n 2. Mathematic 2\n 3. Mathematic 3\n");
                        printf("Make your selection---->");
                        scanf("%d",&c);
                        printf("You choose subject Mathematic %d",c);
                        goto end;
                        case 2:printf("Availabe Subjects\n 1. Programming 1\n 2. Programming 2\n");
                        printf("Make your selection---->");
                        scanf("%d",&c);
                        printf("You choose subject Programming %d",c);
                        goto end;
                    }
                    case 2:printf("Available Units\n 1. Physics\n 2. Chemistry\n");
                    printf("Make your selection---->");
                    scanf("%d",&b);
                    switch(b)
                    {
                        case 1:printf("Available Subject\n 1. Physics 1\n 2. Physics 2\n");
                        printf("Make your selection---->");
                        scanf("%d",&c);
                        printf("You choose subject Physics %d",c);
                        goto end;
                        case 2:printf("Available Subjects\n 1. Chemistry 1\n 2. Chemistry 2\n");
                        printf("Make your selection---->");
                        scanf("%d",&c);
                        printf("You choose subject Chemistry %d",c);
                        goto end;
                    }
                    }
}
end:
    printf("\nThank You\n");
    return 0;
}
