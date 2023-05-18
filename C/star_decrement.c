#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int limit,i,j;
    printf("Enter the number of rows");
    scanf("%d",&limit);

    for (i=0;i<limit;i++){

        for (j=0;j<limit-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}