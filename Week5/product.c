//
//  product.c
//  
//
//  Created by Elnaz on 10/7/16.
//
//
//Step 1: Define a structure type to represent product information sku and price.
//Step 2: Define an array of products and initialize it with the following values:
//{{1267, 7.32}, {1234, 9.32}}
//Print the elements of the array in an informative form.


//Step 1: Define a structure type to represent product information sku and price.
struct Product{
    int sku;
    float price;
};

#include <stdio.h>

int main()
{
    //Step 2: Define an array of products and initialize it with the following values:
    //{{1267, 7.32}, {1234, 9.32}}
    
    struct Product product[2]={{1267, 7.32},
                               {1234, 9.32}};
    
    //Print the elements of the array in an informative form.
    for(int i=0;i<2;i++)
        printf("%d  %.2f\n",product[i].sku,product[i].price);
    
}







