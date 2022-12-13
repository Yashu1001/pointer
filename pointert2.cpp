#include<stdio.h>
main(){
	int a,b,*x,*y,n;
	
	printf("ENTER THE VALUE X= ");
	scanf("%i",&a);
	printf("ENTER THE VALUE Y= ");
	scanf("%i",&b);
	
	x=&a;
	y=&b;
	
	n=*y;
   *y=*x;
   *x=n;
	
	printf("SWAPPED VALUE\nX= %i\nY= %i",a,b);

}
