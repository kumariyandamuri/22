#include<stdio.h>
 int main()
{
	char a;
	printf("enter  a character");
	scanf("%c",&a);
	if((a>='A' && a<='Z') || (a>='a' && a<='z'))
	{
	printf(" \n %c given  character is alphabet",a);
    }
    else if (a>='0' && a<='9')
	{
	
	printf("\n %c Given input is Digit",a);
    }
	else
	{
	printf("\n %c Given input is special character",a);
	}
	return 0;
	
}
