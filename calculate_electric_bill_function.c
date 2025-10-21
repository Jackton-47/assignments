/*
JACKTON SIBUDA
PA106/G/28758/25
Function that calculates total elecric bill based number of units consumed
*/

#include <stdio.h>
float electric_bill(float units);

void  main(){
	
	float units, bill;
	
	printf("Enter number of units consumed: ");
	
	scanf("%f", &units);
	
	bill = electric_bill(units);
	
	printf("The electic bill amount is: Ksh %.2f\n" , bill);
	
	return 0;
}

float electric_bill(float units){
	float bill_amount=0.0;
	
	if(units<=100){
		bill_amount=units * 10;
	}
	
	else if(units<= 200){
		bill_amount=(units * 10) + (units-100) * 15;
	}
	
	else {
		bill_amount=(100 * 10) + (100 * 15) + (units - 200) * 20;
	}
	
	return bill_amount;
	}