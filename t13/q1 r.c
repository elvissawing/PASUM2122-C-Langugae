#include <stdio.h>

int main(void)

{ int i, j;

float A[2][2],B[2][2],B1[2][2],C[2][2],D;

for(i = 0; i < 2; i = i + 1)

{ for(j = 0; j < 2; j = j + 1)

{ printf("enter for A[%d][%d]\n",i,j);

scanf("%f", &A[i][j]);

if(i!=j)

{ B[i][j]=A[i][j];

}

}

}

B[0][0]=A[1][1];

B[1][1]=A[0][0];

printf("The matrix A:\n");

for(i = 0; i < 2; i = i + 1)

{ for(j = 0; j < 2; j = j + 1)

{ printf("%.2f\t",A[i][j]);

}printf("\n");

}

printf("Interchange leading diagonal elements\n");

for(i = 0; i < 2; i = i + 1)

{ for(j = 0; j < 2; j = j + 1)

{ printf("%.2f\t",B[i][j]);

}printf("\n");

}

printf("Changing the signs of the other two elements\n");

for(i = 0; i < 2; i = i + 1)

{ for(j = 0; j < 2; j = j + 1)

{ if (i!=j)

{B1[i][j]=-B[i][j];

printf("%.2f\t",B1[i][j]);

}

else{

B1[i][j]=B[i][j];

printf("%.2f\t",B1[i][j]);}

}printf("\n");

}

printf("The Determinants\n");

D = A[0][0]*A[1][1]-A[0][1]*A[1][0];

if (D==0)

{ printf("The Matrix is singular\n");

}

else {printf("The Matrix is nonsingular %.2f\n",D);

printf("The Inverse for the matrix A\n");

for(i = 0; i < 2; i = i + 1)

{ for(j = 0; j < 2; j = j + 1)

{ C[i][j]=(1/D)*B1[i][j];

printf("%.2f\t",C[i][j]);

}printf("\n");

}

printf("\n");

printf("%.2f %.2f\n", C[0][0]*A[0][0]+C[0][1]*A[1][0],C[0][0]*A[0][1]+C[0][1]*A[1][1]);

printf("%.2f %.2f\n",C[1][0]*A[0][0]+C[1][1]*A[1][0],C[1][0]*A[0][1]+C[1][1]*A[1][1]);

}

return 0;

}
