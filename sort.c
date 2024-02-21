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
    printf("The Array is :");
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(ptr+i));
    }
    return 0;

}