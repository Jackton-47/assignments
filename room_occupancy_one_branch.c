/*
JACKTON SIBUDA
PA106/G/28758/25
array to store data on number of occupied and unoccupied rooms
*/
#include <stdio.h>
int main()
{
	int occupancy[5][10] = {
	{1,0,1,1,0,0,1,0,1,1},
	{0,0,0,1,0,1,1,0,1,0},
	{1,0,1,0,1,0,1,0,1,0},
	{0,1,0,1,0,1,0,1,0,1},
	{0,1,1,0,0,1,0,1,0,0}
		
	};
	
	printf("---Branch one occupancy---\n");
	int floor,room;
	
	for(floor=0 ;floor < 5;floor++){
		int occupied =0;
		for(room= 0;room < 10;room++){
			occupied = occupied + occupancy[floor][room];
		}
		int unoccupied = 10 - occupied;
		printf("Floor %d: occupied = %d, unoccupied = %d\n", floor + 1, occupied,unoccupied);
	}

		
		
	
	
	return 0;
}