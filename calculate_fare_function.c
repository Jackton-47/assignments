/*
JACKTON SIBUDA
PA106/G/28758/25
Function that calculates total fare based on the distance covered
*/

#include <stdio.h>
float calculatefare(float distance);

void  main() {
	float distance,result;
	
	printf("Enter the distance travelled(in kilometres): ");
	scanf("%f", &distance);
	
	result =  calculatefare(distance);
	
	printf("The total fare is Ksh %.1f", result);
	
	return 0;
}
float calculatefare(float distance){
	float fare;
	
	fare = distance * 50;
	
	return fare;
}