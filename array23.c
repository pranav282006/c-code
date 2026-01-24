#include<stdio.h>
void main(){
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int agearr[size];
    printf("Enter age of childern's:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&agearr[i]);
        if(agearr[i]>5){
            printf("age should not be greter then 5.\nRe enter age\n");
        }
    }
    for(int i=0;i<size;i++){
        printf("%d\n",agearr[i]);
    }
}
