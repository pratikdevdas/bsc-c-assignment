#include <stdio.h>
int main()

{

int x, y;

 x = 10;
 y = 20;
 x+= ++y+y++;
 
printf("The value of x after the operation is %d",x);
return 0;
 }
