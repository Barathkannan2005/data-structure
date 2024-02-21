#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter the Number of Terms : ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        printf("Enter the element %d :",i+1);
        scanf("%d",arr+i);
        sum += *(arr + i);
    }
    printf("\n The sum of the elements is %d",sum);
    
}