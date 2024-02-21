#include<stdio.h>
int main(){
    int n,search,temp=0;
    printf("Enter the Number of Terms : ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i =0;i<n;i++){
        printf("Enter the element %d :",i+1);
        scanf("%d",arr+i);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr+i)>(arr+j)){
                temp=*(arr+j);
                (arr+j)>(arr+i);
                *(arr+i)=temp;
            }
        }
    }
    printf("\n Sorted array : \n");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}