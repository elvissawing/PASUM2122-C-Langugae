#include <stdio.h>
#define text(msg) #msg
#define numbers(a, b, c) a##b##c

int main()

{
printf(text(Numbers in descending orders:\n ));
printf("numbers (30, 20, 10)  %d\n", numbers(30, 20, 10));
return 0;

}
