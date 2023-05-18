#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int number,a,b;
    float answer;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    printf("You have 4 choices below: \n 1 : addition \n 2: subtraction \n 3: divition \n 4: multiplication");
    scanf("%d",&number);

    if(number==1){
        answer=a+b;
        printf("the sum of two number is : %f",answer);
    }
    else if (number==2)
    {
        answer = a-b;
        printf("the sum of two number is : %f",answer);

    }
    else if (number==3)
    {
        answer=a/b;
        printf("the sum of two number is : %f",answer);
    }
    else if (number==4)
    {
        answer=a*b;
        printf("the sum of two number is : %f",answer);
    }
    else{
        printf("the choice you have packed is wrong so please select the currect one");
    }
    
    
    

}