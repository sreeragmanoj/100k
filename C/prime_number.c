#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int num,flag=0,i;
    printf("enter the number to be checked if that is prime or not ! : /n");
    scanf("%d",&num);
    for ( i = 2; i <= num/2 ; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
        
    }

    if (flag==0)
    {
        printf("the entered number is prime");
    }
    else{
        printf("the entered number is not prime");
    }
    

}