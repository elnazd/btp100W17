#include<stdio.h>

#define SIZE 4
int main()
{
	//Define an array of 4 student numbers
	//Initialize the array with the following student numbers: 123456, 246810, 354790, 234765

	int student_numbers[SIZE] = {123456,246810,354790, 234765};
	
	//change student number stored in index 0 to 923456
	//Access the first element of the array
	student_numbers[0] = 923456;
	
	//Display student number for the student stored in index 3
	printf("%d\n",student_numbers[3]);
	
	//Display all student numbers in a list
	for(int index=0; index<SIZE; index++)
		printf("studnent %d: %d\n",index, student_numbers[index]);
	
	return 0;

}
