/* 
Write a program to prompt the user to enter their grades.
If student’s grade is greater than 60 AND less than 70 
	print “C”

*/
#include<stdio.h>
int main()
{
	float grade;
	printf("Please input your grade:");
	scanf("%f",&grade);
	
	if(grade > 60 && grade <70) //Both grade>60 AND grade<70
		printf("C\n");
		
	return 0;
}
