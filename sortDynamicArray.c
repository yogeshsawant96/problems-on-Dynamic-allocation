#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void sortASC(int *arr,int size)
{
	int i=0,j=0,temp=0;
	if(arr==NULL)
	{
		return;
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
		 if(arr[i]<arr[j])
		 {
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
		 }			 
		}
	}
}
int main()
{
	int *arr=NULL;
	int no=0,i=0;
	printf("Enter Size of Array :");
	scanf("%d",&no);
	arr=(int *)malloc(no*sizeof(int));
	if(arr==NULL)
	{
		printf("\nEnable To Allocate Memory");
	}
	printf("\nEnter array elements :\n");
	for(i=0;i<no;i++)
	{
		scanf("%d",&arr[i]);
	}
	sortASC(arr,no);
	printf("\narray elements :\n");
	for(i=0;i<no;i++)
	{
		printf("%d ",arr[i]);
	}
}
