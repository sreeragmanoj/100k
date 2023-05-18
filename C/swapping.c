#include<stdio.h>
#include<stdlib.h>

int main(void){
    // int temp,number1,number2;
    // printf("enter the number to be swapped");
    // scanf("%d%d",&number1,&number2);
    // printf("as you submitted ");
    // printf("a= %d", number1);
    // printf("b= %d", number2);
    // temp=number1;
    // number1=number2;
    // number2=temp;
    // printf("after the swapping the values are a= %d b= %d", number1,number2);

    //ANOTHER METHOS FOR DOING THIS IS BELOW 

    
    int a=10,b=20;
    a=a*b;
    b=a/b;
    a=a/b;
    printf("swapped values are a=%d b=%d", a,b);

}