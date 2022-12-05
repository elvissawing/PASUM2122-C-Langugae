#include <stdio.h>

int main(void)

{ int i, j;

int n;

char StudID[100][10];

float sum,ave,score[90][6];

printf("enter the number of students\n");

scanf("%d", &n);


for(i=0;i<n;i++)

{printf("StudID[%d]\n",i);

scanf("%s[^\n]",StudID[i]);}

printf("************************************\n");

for(i = 0; i <= n-1; i = i + 1)

{puts(StudID[i]);

//printf("StudID[%d]************************************\n",i);

for(j = 0; j <= 4; j = j + 1)

{ if (j<=3)

{

if(j==0)printf(" Maths\t");

else if (j==1)printf(" Chemistry\t");

else if (j==2)printf(" Physics\t");

else if (j==3) printf(" Programming\t");

printf("enter for a[%d][%d]==>",i,j);

scanf("%f", &score[i][j]);

}

}

}

printf(" Stud***********Maths***********Chemistry*******Physics******Programming******Average*****\n",i);

for(i = 0; i <= n-1; i = i + 1)

{ sum = 0;

// puts(StudID[i]);

printf("%s\t\t ",StudID[i]);

for(j = 0; j <= 4; j = j + 1)

{

if (j<=3)

{printf("%.2f|\t\t",score[i][j]);

sum=sum+score[i][j];

}

else

{

ave=sum/4;

printf("%.2f\t",ave);

}

}

printf("\n");

}

return 0;}
