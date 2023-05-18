#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit,i,j,values[100],temp;
    printf("enter the limit of the array");
    scanf("%d",&limit);
    printf("Enter the values :");
    for (i=0;i<limit;i++){
        scanf("%d",&values[i]);

    }

    for (i=0;i<limit-1;i++){
        for (j=i+1;j<limit;j++){
            if (values[i] > values[j]){
                temp=values[i];
                values[i]=values[j];
                values[j] = temp;
            }
        }
    }
    printf("sorted values are :");
    for (i=0;i<limit;i++){

        printf("%d \n",values[i]);
    }
}