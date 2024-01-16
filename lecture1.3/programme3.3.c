#include<stdio.h>

main()

{

	int length, width, Area;
	
	printf("Enter the length of rectangle : ");
	scanf("%d",&length);
	
	printf("Enter the width of rectangle : ");
	scanf("%d",&width);
	
	Area=length*width;	//area of rectangle
	
	printf("Area of rectangle is : %d",Area);
}
