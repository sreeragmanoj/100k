#include<stdio.h>
#include<stdlib.h>

int main(void){
    int item;
    printf("Hello welcome to our hotel");
    printf("please select your food item \n Your choices are below\n\n\n 1: porotta \n 2: biriyani \n 3: mandi \n 4: chapathi \n 5: rotti");
    scanf("%d",&item);

    switch (item)
    {
    case 1:
        printf(" You have selected porotta \n price is 10rs \n thank you selecting our hotel");
        break;
    case 2:
        printf(" You have selected biriyani \n price is 100rs \n thank you selecting our hotel");
        break;
    case 3:
        printf(" You have selected mandi \n price is 250rs \n thank you selecting our hotel");
        break;
    case 4:
        printf(" You have selected chapahti \n price is 8rs \n thank you selecting our hotel");
        break;
    case 5:
        printf(" You have selected rotti \n price is 15rs \n thank you selecting our hotel");
        break;
    
    default:
        printf(" sorry this item is not present in oour hotel");
        break;
    }
}