#include<stdio.h>
void main ()
{
   int n1,n2,n3;
   printf("enter the three ASCII number");
   scanf("%d%d%d", &n1,&n2,&n3);
   printf("%c%c%c",n1+95,n2+95,n3+95);
}
