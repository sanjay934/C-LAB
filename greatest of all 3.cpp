#include <stdio.h>
main()
{
	int a,b,c;
	printf("take three numbers");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b&&a>c)
	printf("the greatest number is %d",a);
	else
	if(b>a && b>c)
	printf("the greatest number is %d",b);
	else
	printf("the greatest number is %d",c);

}
