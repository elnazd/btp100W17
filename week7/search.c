#include<stdio.h>
#define MAX 2

struct Product{
	
	int sku;
	float price;
};
int main()
{
	struct Product product[2] = {{1234,23.5},{1475,10.99}};
	
	//write the code to display the products
    for(int i=0;i<MAX;i++)
        printf("%d: SKU:%d, Price:%.2f\n",i+1,product[i].sku, product[i].price);
    
	//Write the code to prompt the use to input sku number of a product they are looking for.
	//search for the sku number
	//Display an informative message if the product is found.
    int sku;
    printf("Input a sku number of a product you are looking for:");
    scanf("%d",&sku);
    
    int found_index=-1;//This value represents the index for the matching sku number. This value is -1 by default and it means the item is not found.
    
    for(int i=0;i<MAX;i++)
    {
        if(product[i].sku==sku)
        {
            found_index=i;
            i=MAX;

        }
    }
	
    if(found_index==-1)
        printf("Item does not exist in the list!\n");
    else
        printf("Item exists in the list and it is $%.2f.",product[found_index].price);
    
    return 0;
	
}
