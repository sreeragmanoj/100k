#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit,a[100],i,sum=0;
    printf("Enter the limit for the array");
    scanf("%d",&limit);
    printf("Enter the values");
    for (i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<limit;i++){
        sum=sum+a[i];
    }
    printf("The sum of values in array is : %d",sum);
}