#include<stdio.h>
void main(){
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    float arr[size];
    printf("Enter height:\n");
    for(int i=0;i<size;i++){
        scanf("%f",&arr[i]);
        if(arr[i]>6||arr[i]<5.5){
            printf("Height shall not be greter than 6ft and less than 5.5ft\nRe enter height\n");
        }
    }
    for(int i=0;i<size;i++){
        printf("%f\n",arr[i]);
    }
}
