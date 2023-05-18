#include<stdio.h>
#include<stdlib.h>

int main(void) {
    float number1,number2,number3;
    float average;
    printf("Enter 3 numbers to find the average");
    scanf("%f%f%f",&number1,&number2,&number3);
    average = (number1+number2+number3)/3;
    printf("the average value is %f", average);
}