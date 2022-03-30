#include<stdio.h>
void main()
{
	int n,r,i;
	scanf("%d%d",&n,&r);
	for(i=1;i<=r;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
