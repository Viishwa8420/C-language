#include<stdio.h>

main()

{

	int base, height, Area;
	
	printf("Enter the base value of triangle : ");
	scanf("%d",&base);
	
	printf("Enter the height of triangle : ");
	scanf("%d",&height);
	
	Area=(base*height)/2;	//area of triangle
	
	printf("Area of triangle is : %d",Area);
}
