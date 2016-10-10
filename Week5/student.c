#include <stdio.h>
#define NUMBER_COURSES 10

struct Student{
    int number;
    float grade;
    
};


int main()
{
    //define an array of Students size 10
    struct Student student[10];
    //Prompt the students to input their information
    for(int i=0;i<10;i++)
    {
        printf("Please input your student number:");
        scanf("%d",&student[i].number);
        
        printf("Please input your grade:");
        scanf("%f",&student[i].grade);
        
    }
    
    //Display student numbers and their marks:
    for(int i=0;i<10;i++)
    {
        printf("%d %.2f\n",student[i].number,student[i].grade);
    }
    
    
    return 0;
    
    
    
}


