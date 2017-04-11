
#include<stdio.h>
#include<string.h>

#define SIZE 31
int main()
{
	//allocate memory for the string
	//Scanf the string from the user
	char name[SIZE];
	char backup[SIZE];
	
	int length;
	
	printf("Name:");
	scanf("%[^\n]",name);
	
	//copy name to backup
	strcpy(backup,name);
	
	if(!strcmp(name,backup))
		printf("The strings are equal!\n");
    if(strcmp(name,backup) > 0)
		printf("the string name is alphabetically after the string backup.\n");
	if(strcmp(name,backup) < 0)
		printf("the string name is alphabetically before the string backup.\n");
	
}



