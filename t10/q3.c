#include <stdio.h>
int Thor (int);

int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
printf("Total: %d", Thor (num));
return 0;
}

int Thor(int pq)
{    if (pq==1)
return 0;
else if (pq % 2 != 0)
return Thor(pq/2);
else return 1 + Thor(3*pq + 1);}
