
#include<stdio.h>
#define SIZE 10
int main()
{
	float grade[SIZE],sum=0,average;
	
  //Input the grades from the user and save it into array grade
	for(int i=0; i<SIZE;i++)
	{
		printf("Input a grade:");
		scanf("%f",&grade[i]);		
	}
  
  //Compute sum of the grades	
	for(int i=0; i<SIZE;i++)
		sum = sum + grade[i];

	//calculating the average:
	average = sum / SIZE;
	printf("Average grade of the class is: %.1f",average);
	
}



