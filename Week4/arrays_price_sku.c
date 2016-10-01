/*Define an array of size four, call it price and initializeit with these values: {12.34, 7.89, 6.56, 9.32}
Print all the elements of the array. 
*/

/*Define an array called sku (Stock Keeping Unit) to store the sku number of four items. Initialize it with { 2156, 4633, 3122, 5611}. 
These sku numbers refer to the price array mentioned before.
*/
#include<stdio.h>
#define SIZE 4
int main()
{
	float price[SIZE] = {12.34, 7.89, 6.56, 9.32};
	int sku[SIZE] = { 2156, 4633, 3122, 5611};
	
	float sum=0,total;
	
	for(int i=0; i<SIZE ; i++)
		printf("Item %d is %.2f \n",sku[i],price[i]);
		
	//A customer buys one of each product.
	//Calculate the total purchase price, including %13 HST.
	//Sum of prices
	for(int i=0;i<SIZE;i++)
		sum = sum + price[i];
		
	//Calculate the total price:
	total = sum + sum*0.13;
	
	printf("Total price is $%.2f\n",total);
	return 0;
}
