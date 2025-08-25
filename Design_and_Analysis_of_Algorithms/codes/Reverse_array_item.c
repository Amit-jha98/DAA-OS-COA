#include<stdio.h>

int main(){
    int size;
    printf("Enter The Size Of Array: \n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter Elements: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original Array: \n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    int i = 0;
    int j=size-1;
    int temp;
    
    while(i<=j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("Reversed Array: \n");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}