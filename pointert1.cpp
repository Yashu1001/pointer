#include<stdio.h>
main(){
	float a,square=0;
	float *b,*c;
	
	printf("ENTER THE ELEMENTS= ");
	scanf("%f",&a); 
	
	b= &a;
	c= &square;  
	
	square=(*b) * (*b);
	
	printf("SQUARE OF POINTER= %f",*c);
		
}
