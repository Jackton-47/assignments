/*
Jackton Sibuda
PA106/G/28758/25
A program that checks student eligibility for final exam
*/
#include <stdio.h>

int main(){
	int attendance,average_marks;
	
	printf("Enter percentage attendance: ");
	scanf("%d", &attendance);
	
	printf("Enter your average marks: ");
	scanf("%d", &average_marks);
	
	//conditions
	if(attendance>=75 && average_marks>=40)
		printf("you are eligible for the final exam");
	else
		printf("not eligible");
	

	
	return 0;
}