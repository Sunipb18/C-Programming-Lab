#include<stdio.h>
#include<math.h>
void main()
{
	float x1,x2,y1,y2,slope,angle;
	printf(" Enter the X Coordinate of Endpoint 1: ");
        scanf("%f",&x1);
        printf(" Enter the Y Coordinate of Endpoint 1: ");
        scanf("%f",&y1);
        printf(" Enter the X Coordinate of Endpoint 2: ");
        scanf("%f",&x2);
        printf(" Enter the Y Coordinate of Endpoint 2: ");
        scanf("%f",&y2);
        printf(" The Endpoints of a Line are : (%.2f,%.2f) and (%.2f,%.2f)",x1,y1,x2,y2);
        slope=(y2-y1)/(x2-x1);
	printf("Slope=%0.2f",slope);		     
}
