/*
Write a program to
Prompt a user to enter the number of grades.(Number of students)
Read the number of grades

Loop:
Prompt a user to enter their grades
Read all the grades

Calculate the sum of the grades.

Calculate the average of the grades.
*/
#include<stdio.h>
int main()
{
	int number_students;
	float grade,sum=0,average;
	
	printf("Please input the number of students:");
	scanf("%d",&number_students);
	
	for(int counter=0; counter<number_students;counter++)
	{
		printf("Input a grade:");
		scanf("%f",&grade);
		sum = sum + grade;
		
	}
	
	//calculating the average:
	average = sum / number_students;
	printf("Average grade of the class is: %.1f",average);
	
	
	
}



