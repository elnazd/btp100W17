//Reading a file and display it on the terminal
#include<stdio.h>
int main()
{
	float price;
	int quantity;
	int noRecords = 0;
	
	//open the file for reading
	FILE *fp = fopen("text.txt","r");
	//Check if the file exists
	if(fp!=NULL){
		//The file exists...
		//reading from the file....
		while(!feof(fp)){
		
			fscanf(fp,"%f,%d\n",&price,&quantity);
			pritf("The price is %.2f, the quantity is %d\n",price,quantity);
			noRecords++;
		
		}
		printf("There are %d records in the file.",noRecords);
		fclose(fp);	
	}else
		printf("Error!The file does not exists!\n");
	

	return 0;
}
