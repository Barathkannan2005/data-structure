#include<stdio.h>
int main(){
    int n,search;
    printf("Enter the Number of Terms : ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        printf("Enter the element %d :",i+1);
        scanf("%d",arr+i);
    }
    printf("\nEnter the search element : ");
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(*(arr+i)==search){
            printf("The element is found at index : %d",i);
            exit(0);
        }
    }
    printf("Element Not found");
}