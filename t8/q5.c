#include<stdio.h>
int main()
{
int n=6, r, c;

    for ( r = 1 ; r <= n ; r++ )
    {
        for( c = 1 ; c <= n ; c++ )
            if(((r+c)%2)==0) printf(" 0 ");
            else printf(" 1 ");
        printf("\n");
    }
    return 0;
}
