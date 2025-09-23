//Program to prompt users to enter their height,ID number and bank balance
/*
Name:Jackton Sibuda 
REG No:PA106/G/28758/25
Description:Program prompting users to enter their height,ID number and bank balance
*/
#include<stdio.h>

int main() {
	int height;
	int ID_number;
	int bank_balance;
	
	//prompt for height*/
	printf("Enter your height (in centimetres): ");
	scanf("%d", &height);
		printf("your height is %d\n ",height);
		
	//prompt for ID number */
	printf("Enter your ID_number : ");
	scanf("%d", &ID_number);
		printf("your ID_number is %d\n ",ID_number);
		
	  	//prompt for bank_balance*/
	printf("Enter your bank_balance: ");
	scanf("%d", &bank_balance);
	printf("your bank_balance is %d\n ",bank_balance);
	
	return 0
}
