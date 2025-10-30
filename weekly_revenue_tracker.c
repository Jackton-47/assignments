/*
JACKTON SIBUDA
PA106/G/28758/25
Array showing a hotel's records for its total revenue for each day of the week
*/

#include <stdio.h>
int main()
{
	int i;
    int sum =0;
	int revenue [7];
	float average;
	
	printf("Enter the hotel revenue for each day of the week:\n");

	
	for(i = 0;i < 7; i++){
		printf("Day %d: ", i+1);
		scanf("%d", &revenue[i]);
		sum = sum + revenue[i];

	}
	
	average = sum / 7;
	
	printf("The Total Weekly Revenue is: %d\n", sum);
	printf("The average daily revenue is: %f\n", average);
		
	
	
	
	return 0;
}