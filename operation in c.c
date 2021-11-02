/* All arithmetic operations */
#include<stdio.h>
void main()
{
	int a,b,s,A,i,r,m;
	a=140;
	b=30;
	s=a+b;
	A=a-b;
	i=a*b;
	r=a/b;
	m=a%b;
	printf("sum of %d and %d is %d\n",a,b,s);
	printf("difference of %d and %d is %d\n",a,b,A);
	printf("product of %d and %d is %d\n",a,b,i);
	printf("quotient of %d and %d is %d\n",a,b,r);	
	printf("reminder of %d and %d is %d",a,b,m);
}
