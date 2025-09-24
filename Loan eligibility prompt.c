/*
Jackton Sibuda 
PA106/G/28758/25
Program to inform customers of their eligibility to qualify for a loan
*/
#include <stdio.h>

int main () {
	int age,annual_income;
	
	//prompt for customer details
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your annual income: ");
	scanf("%d",&annual_income);
	
	//conditions for loan eligibility
	if(age>21 && annual_income>21000)
		printf("Congratulations you qualify for a loan.");
	else
		printf("Unfortunately,we are unable to offer you a loan at this time.");
	
	return 0;
}