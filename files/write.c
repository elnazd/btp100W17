//Writing to a file 
#include<stdio.h>
int main()
{
	int quantity = 20;
	//open the file for reading
	FILE *fp = fopen("information.txt","w");
	//Check if the file exists
	if(fp!=NULL){
		
		fprintf(fp,"Hello files!\n");
		fprintf(fp,"Quantity is %d\n",quantity);
		
		fclose(fp);	
	}else
		printf("Error!The file does not exists!\n");
	

	return 0;
}
