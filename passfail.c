#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter The No.of students :");
	scanf("%d",&n);
	int temp=0,pass=0,fail=0;
	int *student=(int*)malloc(n*sizeof(int));
	int *marks=(int*)malloc(5*sizeof(int));
	for(int i=0;i<n;i++)
	{
		temp=0;
		printf("\t\nEnter the Student-%d Details\n",i+1);
		printf("\nEnter the 5 subject marks :");
		for(int j=0;j<5;j++)
		{
			scanf("%d",(marks+j));
			if(*(marks+j)<50){
				temp+=1;
			}
		}
		if(temp<1){
			pass+=1;
		}else{
			fail+=1;
		}
	}
	printf("The Number of Students Passed : %d\n",pass);
	printf("The Number of Students Failed : %d",fail);	
	return 0;
}