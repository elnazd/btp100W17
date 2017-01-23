/*
Write a C program that calculates the area of a triangle.  
Your program prompts the user to enter the height and base.
It accepts the user's input in decimal format.
It multiplies the product of the height and base by 0.5.
It stores the area in memory and outputs the area to 2 decimal places*/

/*
	Step 0: Start your program and define variables
	Step 1: prompts the user to enter the height
	step 2: read the height
	Step 3: prompts the user to enter the base
	step 4: read the base
	step 5: calculate the area
	step 6: display the area
*/
#include<stdio.h>
int main()
{
	//Step 0
	float height,base,area;
	//step 1
	printf("Height:");
	//step 2
	scanf("%f",&height);
	//step 3:
	printf("Base:");
	//step 4:
	scanf("%f",&base);
	//	step 5: calculate the area

	area = height * base * 0.5;//area = (height * base) / 2
	
	printf("The area is %.2f\n",area);
	return 0;
}
