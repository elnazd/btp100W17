//
//  circle_area.c
//  
//
//  Created by Elnaz on 1/22/18.
//
//
/* Write a program to prompt the user to input radius of a circle. Then, your program calculates the area of the circle, and displays it. The area of a circle is given by the formula Area = pi * radius * radius
 
 Step 1: Define the variables
 Step 2: Prompt the user to input radius of a circle
 Step 3: Read the radius of the circle from the user
 Step 4: Calculate the area of the circle
 Step 5: Display the area

*/

#include <stdio.h>
int main()

{

    // Step 1: Define the variables
    float radius,area;
    const float pi = 3.14;
    
    // Step 2 and 3
    printf("Please input the radius of the circle:");
    scanf("%f",&radius);
    
    //Step 4
    area = pi * radius * radius;
    
    //Step 5
    printf("The area of the circle is %.2f\n", area);
    
    return 0;
}
