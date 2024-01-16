#include<stdio.h>
#define PI 3.14

main()
{
	int radius;
	float Perimeter;
	
	printf("Enter your value for radius : ");
	scanf("%d",&radius);
	
	Perimeter=2*PI*radius;
	printf("perimeter of circle : %.2f",Perimeter); //perimeter of circle
	
}
