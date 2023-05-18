#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("number %d is larger and lesser value is %d",a,b);
    }
    else{
        printf("number %d is larger and lesser is %d",b,a);
    }

}