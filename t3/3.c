#include<stdio.h>
int main()
{
    int part1;
    float part2;

    scanf("%d",&part1);
    scanf("%f",&part2);

    printf("10d\n",part1);
    printf("+10d\n",part1);
    printf("%15f\n",part2);
    printf("%15e\n",part2);
    printf("%15.3f\n",part2);

    return 0;

}
