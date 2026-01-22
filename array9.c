#include<stdio.h>
void main(){
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elament:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(i%2==0){
            printf("%d\n",arr[i]);
        }
    }
}
