#include<stdio.h>

main()

{

	int p, t;
	float r, SI;
	
	printf("Enter the value of principal : ");
	scanf("%d",&p);
	
	printf("Enter the value of time : ");
	scanf("%d",&t);
	
	printf("Enter the rate of interest : ");
	scanf("%f",&r);
	
	SI=(p*r*t)/100;	//simple interest formula
	
	printf("Simple Interest is : %.2f",SI);
}
