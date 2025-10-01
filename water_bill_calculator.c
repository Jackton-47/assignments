/*
Jackton Sibuda
PA106/G/28758/25
PROGRAM THAT CALCULATES WATER BILL
*/

#include <stdio.h>
int main(){
	float units,bill;
	//unit consumed entry prompt
	printf("Enter water units consumed: ");
	scanf("%f", &units);
	
	//total bill calculation

	if(units<=30)
		bill=units * 20;
	
	else if(units<=60)
		bill=units * 25;
	
	else if(units>60)
		bill=units * 30;
	
	printf("Total water bill: %.2f KES\n", bill);
	
	return 0;
}
