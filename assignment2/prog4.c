#include <stdio.h>
int main() 

{
	int char1, char2,sum;

	printf("Please enter the character 1 and 0 \n");

	char1 = getchar();
	char2=getc(stdin);

	printf("The entered values are %c and %c\n",char1,char2);

	sum=char1+char2;
	
	printf("The sum of char 0 and char 1 = %c having ASCII 		value of %d",sum,sum);
	
return 0;
}
