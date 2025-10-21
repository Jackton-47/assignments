/*
JACKTON SIBUDA
PA106/G/28758/25
Function that converts temperature from farenheit to celsius
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit);

void  main(){
	float fahrenheit,result;
	
	printf("Enter the temperature in fahrenheit: ");
	scanf("%f", &fahrenheit);
	
	result = convertToCelsius(fahrenheit);

	printf("The temperature is %.2f %cC\n", result,248);
	
	return 0;
}
float convertToCelsius(float fahrenheit){
	float celsius;
	
	celsius = (fahrenheit - 32) * (5.0/9.0);
	
	return celsius;
}