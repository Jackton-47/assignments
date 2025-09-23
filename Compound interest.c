/*
Jackton Sibuda
PA106/G/28758/25
Program to find compound interest by accepting the principle amount,time and rate values
Compound interest=principle*(1+rate/100)
*/

#include<stdio.h>
#include<math.h>

int main () {
	float principle,time,rate,compound_interest;
	
	//prompt to enter principle amount
	printf("Enter the principle amount: ");
	scanf("%f",&principle);
	
	//prompt to enter to time 
	printf("Enter the time(in years): ");
	scanf("%f",&time);
	
	//prompt to enter rate
	printf("Enter the rate(per annnum): ");
	scanf("%f",&rate);
	
	rate=rate/100;
	
	//formula for calculating compound interest
	compound_interest = principle * pow(1 + rate, time);
	
	printf("Compound interest is %f" ,compound_interest);
	return 0;
}