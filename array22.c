#include<stdio.h>
void main(){
    int size;
    printf("Enetr size of arrray:\n");
    scanf("%d",&size);
    getchar();
    char arr[size];
    printf("Enter character in array:\n");
    for(int i=0;i<size;i++){
        scanf(" %c",&arr[i]); //space before %c is important
    }
    printf("ASCII value:\n");
    for(int i=0;i<size;i++){
        printf("%d\n",arr[i]);
    }
}
