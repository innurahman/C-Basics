#include<stdio.h>
void main()
{
	int a, b, c;
	a=10;
	b=4;
	c=3;
	a+=b;
	b-=c;
	c*=a;
	a/=b;
	b*=c;
	a+=b;
	printf("%d %d %d",a,b,c);
}
