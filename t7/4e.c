#include <stdio.h>
   int main()
   {
     int count = 0;

     for(;;)
     {
        printf("%d, ",count);
        count = count+1;
        if(count>50)
    	   break;
    }
    printf("\n");
    return(0);
  }
