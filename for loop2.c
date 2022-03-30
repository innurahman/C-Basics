#include<stdio.h>
void main()
{
	int a,b,x,i;
	scanf("%d%d%d",&x,&a,&b);
	for(i=a;i<=b;i++)
	{
		if(i%x!=0)
		{
			continue;
		}
		else
		{
		printf("%d\t",i);
		}
	}
	
}
