#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,max=0,temp;
    int *ptr;
    printf("Enter The Size of Array :");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter The elements of array :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    for (int i = 0; i < n; i++)
    {
        for(int  j=i;j<n;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    printf("The Largest element is : %d\n",(ptr[n-1]));
    printf("The 2nd Largest element is : %d",(ptr[n-2]));
    
    return 0;

}