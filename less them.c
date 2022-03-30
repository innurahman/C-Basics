#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	if(a>b)
	{ 
	int t =a;
	a =b;
	b =t;
	
	}
	for(i=a;i<=b;i++)
	{
		printf("%d\n",i);
	}
}
