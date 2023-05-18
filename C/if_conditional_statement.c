#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a>0){
        printf("number is positive");
    }
    else{
        printf("Entered number is negative");
    }

}