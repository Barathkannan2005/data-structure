#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,avg;
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
        sum+=ptr[i];
    }
    avg=sum/n;
    printf("\nThe Average Value Is %d\n",avg);
    return 0;

}