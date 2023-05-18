#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit, value[100],i,searchkey,flag=0;
    printf("enter the limit for the array");
    scanf("%d",&limit);
    printf("please enter the values");
    for (i=0;i<limit;i++){
        scanf("%d",&value[i]);
    }

    printf("What value you want to check :");
    scanf("%d",&searchkey);

    for (i=0; i<limit; i++){
        if (searchkey == value[i]){
            flag=1;
            break;
            
        }
    }
    if (flag==1){
        printf("The value is in %d position", i+1);
    }
    else{
        printf("The value you enterd is not present in this array");
    }

}