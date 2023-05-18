#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int i,num,sum=0;
    printf("enter the number to find the sum of until that number");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        sum = sum+i;
    }
    printf("%d",sum);
}