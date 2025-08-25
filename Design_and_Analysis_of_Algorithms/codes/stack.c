#include<stdio.h>

int main(){
    int size,top,i;

    printf("Enter size of stack: \n");
    scanf("%d",&size);

    int stack[size];
    top=-1;
    if(top == size-1){
        printf("Stack overflow ! \n");
       return 0;
    }else{
    printf("Enter Elements in stack: \n");
        for(i=0; i<size;i++){
            scanf("%d",&stack[i]);
            top++;
        }
    }

    printf("Elements in stack are: \n");
    for(i=0; i<size; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
    printf("Enter Number of elements you want to remove: \n");
    int num;
    scanf("%d",&num);
    if(num > top + 1){
        printf("Not enough elements in stack to remove ! \n");
    }else{
        for(i=0; i<num; i++){
            top--;
        }
    }

    printf("Elements in stack after removal are: \n");
    for(i=0; i<=top; i++){
        printf("%d ", stack[i]);
    }
    printf("\n");
    
    return 0;
}