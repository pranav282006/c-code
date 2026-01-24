#include<stdio.h>
void main(){
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    int prod=1;
    printf("Enter array element:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        prod=prod*arr[i];
    }
    for(int i=0;i<size;i++){
        printf("%d",prod);
    }
}
