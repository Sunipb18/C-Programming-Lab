#include<stdio.h>
void main()
{
	int b,h,t,s=0,hra,ta;
	printf("Enter the basic pay");
	scanf("%d",&b);
	printf("Enter the HRA percentage");
	scanf("%d",&h);
	printf("Enter the TA percentage");
	scanf("%d",&t);
	hra=b*h/100;
	ta=b*t/100;
	s=b+hra+ta;
	printf("Gross salary=%d",s);
}
