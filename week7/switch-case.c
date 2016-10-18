/*
There are 3 items in a store:
Item 1 costs $10.
Item 2 costs $7.
Item 3 costs $12.
Prompt the user to input an item, display the price for the item to the user.
*/

#include<stdio.h>
int main()
{
	int item;
	
	printf("Please input the item number you are looking for:");
	scanf("%d",&item);
	
	switch(item){
		case 1:
		printf("Item 1 costs $10.\n");
		break;
		
		case 2:
		printf("Item 2 costs $7.\n");
		break;
	
		case 3:
		printf("Item 3 costs $12.\n");
		break;
		
		default:
		printf("Error! Item does not exist.\n");
	}
	return 0;
	
}






