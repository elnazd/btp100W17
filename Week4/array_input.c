#include<stdio.h>

#define SIZE 10
int main()
{
	//Define an array of 4 student numbers
	//Prompt the user to input all studnent numbers and store them in the array
	int student_numbers[SIZE];
	
	printf("Please input student numbers:");
	for(int index=0;index<SIZE;index++)
		scanf("%d",&student_numbers[index]);
		
	//Display all student numbers in a list
	for(int index=0; index<SIZE; index++)
		printf("%d\n",student_numbers[index]);
	
	return 0;

}
