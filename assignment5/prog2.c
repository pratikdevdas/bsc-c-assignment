
#include <stdio.h>
int main()
{
int a, b;
 a = 40;
 b = 60;
 
printf("The values of a =%d and b =%d\n",a,b);

a=a^b;
b=a^b;
a=a^b;

printf("The  new values of a =%d and b =%d\n",a,b);

 return 0;
}
