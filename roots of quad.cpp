#include <stdio.h>
#include <math.h>
main()
{
	int a,b,c,r1,r2; 
	printf("enter the values of a b c");
	scanf("%d%d%d",&a,&b,&c);
	r1=(-b+sqrt(b*b-4*a*c))/2*a;
	r2=(-b-sqrt(b*b-4*a*c))/2*a;
	printf("the roots of the given equation are %d and %d",r1,r2);
}
