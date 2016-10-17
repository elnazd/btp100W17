/*
Write a function that takes two integers and calculates the sum of the integers. This function returns the sum of the integers.

int sum(int a, int b);
*/

#include<stdio.h>
int sum(int a, int b);
int mult(int a, int b);
float divide(float a, float b);

int main()
{
	int num1;
	int num2;
	int result,result2;//sum of um1 and num2
	float result3;
	
    printf("Please input two integers:");
	scanf("%d%d",&num1,&num2);
	
	result= sum(num1,num2);//pass by value
	printf("The sum result is:%d\n",result);
	
	result2 = mult(num1,num2);
	printf("The multiplication result is: %d\n",result2);
	
	float c=2.5,d=9.8;
	result3 = divide(c,d);
    printf("For two numbers %.2f and %.2f, the division result is: %.2f\n",c,d,result3);
    
    return 0;


}

int sum(int a, int b)
{
	int result;
	result = a+b;
	return result;

}
/*Write a function that takes two integers and calculates the multiplication of the integers. This function returns the result.*/
int mult(int a, int b)
{
	int result;
	result = a*b;
	return result;
	
	//return a*b;
}

/*Write a function that takes two floats and calculates the division of the numbers. This function returns the result.*/

float divide(float a, float b)
{
	float result;
	result = a/b;
	return result;
	//return a/b;
}
