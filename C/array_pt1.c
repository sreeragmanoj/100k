#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int a[5],i;
    printf("Enter the values");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<5;i++){
        printf("the values are %d \n",a[i]);
    }
    
    
}