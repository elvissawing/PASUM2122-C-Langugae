#include <stdio.h>

int main ()
{

  int x, y, z,sum;
  printf("Input 3 integers: \n");
  scanf("%d %d %d", &x, &y, &z);
  printf("\n---------------------------\n");
  printf("Original numbers: %d, %d, %d",x,y,z);
  printf("\nSorted numbers: ");
  if (x <= y && y <= z){
    printf("%d, %d, %d",x,y,z);
  }
  else{

    if (x <= z && z <= y){
      printf("%d, %d, %d",x,z,y);
    }
    else{

      if (y <= x && x <= z){
        printf("%d, %d, %d",y,x,z);
      }
      else{

        if (y <= z && z <= x){
         printf("%d, %d, %d",y,z,x);
        }
        else{

          if (z <= x && x <= y){
            printf("%d, %d, %d",z,x,y);
          }
          else{
            if (x == y && y == z){
              printf("%d, %d, %d",x,y,z);
            }
            else{
              printf("%d, %d, %d",z,y,x);
            }
          }
        }
      }
    }
}
sum=x+y+z;
printf("\nSum of the three integers: %d",sum);
return 0;
}
