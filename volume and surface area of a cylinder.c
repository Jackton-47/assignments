/*Program to find the volume and surface area of a given cylinder
Jackton Sibuda
PA106/G/28758/25
Volume=PI*radius*radius*height
surface area=2PI*radius*radius+2PI*radius*height
*/

#include<stdio.h>
int main() {
	float radius,height,volume,surface_area;
	float pi=3.142;
	//prompt for radius of the cylinder
	printf("enter radius: ");
	scanf("%f", &radius);
	
	//prompt for height of the cylinder
	printf("enter height: ");
	scanf("%f", &height);
	
	//formula for finding volume
	volume=pi*radius*radius*height;
	
	//formula for finding surface area
	surface_area=2*pi*radius*radius+2*pi*radius*height;
	
	//display answer
	printf("volume of the cylinder= %f\n",volume);
	printf("surface area of the cylinder= %f\n" ,surface_area);
	
	return 0;
}
	
