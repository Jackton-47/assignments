/*
Jackton Sibuda 
PA106/G/28758/25
PROGRAM THAT DISPLAYS BUNDLES AND THEIR COST
*/

#include <stdio.h>
int main(){
	int choice;
	
	//displayed screen
	printf("Select data bundle\n");
	printf("1.100MB @ 50KES\n");
	printf("2.500MB @ 200 KES\n");
	printf("3.1GB @ 350 KES\n");
	printf("4.2GB @ 600KES\n");
	printf("Enter your choice(1-4): ");
	
	//choice prompt
	scanf("%d",&choice);
	if(choice==1)
		printf("You selected 100MB.    Cost=50KES");
	else if(choice==2)
		printf("You selected 500MB.    Cost=200KES");
	else if(choice==3)
		printf("You selected 1GB.      Cost=350KES");
	else if(choice==4)
		printf("You selected 2GB.      Cost=600KES");
	else if (choice>4)
		printf("Invalid choice");
	
	return 0;
}