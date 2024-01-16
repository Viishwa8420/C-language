#include<stdio.h>
main()
{
	int a ;//a=a+100

	printf("Enter your value for a: ");
	scanf("%d",&a);
	a+=100;
	printf("%d",a);
	
	int b ;//b=b-50

	printf("\nEnter your value for b: ");
	scanf("%d",&b);
	b-=50;
	printf("%d",b);
	
	int c ;//c=c*100

	printf("\nEnter your value for c: ");
	scanf("%d",&c);
	c*=100;
	printf("%d",c);
	
	int d ;//d=d/10

	printf("\nEnter your value for d: ");
	scanf("%d",&d);
	d/=10;
	printf("%d",d);
	
	int z ;//z=z%100

	printf("\nEnter your value for z: ");
	scanf("%d",&z);
	z%=100;
	printf("%d",z);
}

