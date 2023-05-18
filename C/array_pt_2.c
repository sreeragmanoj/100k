#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit,a[1000],i;
    printf("enter the array limit");
    scanf("%d",&limit);
    printf("Enter the values");
    for (i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<limit;i++){
        printf(" the values are : %d \n",a[i]);
    }

}