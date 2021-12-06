#include<stdio.h>
void main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num%3==0 && num%7==0)
	{
		printf("given number is divisible by 3 & 7",num);
	}
	else
	{
		printf("given number is not divisible by 3 & 7",num);
	}	
}
