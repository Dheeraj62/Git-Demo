//Program to perform linear search
//Date:   6/3/21
#include<stdio.h>
#include<stdlib.h>
int i;
int lsearch(int[],int,int);
int main()
{
	int A[30],item,index,n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\nENter the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);	
	}
     printf("\nYour array:\n");
	 for(i=0;i<n;i++)
	 printf("%d ",A[i]);
	 printf("\nEnter the element you want to find:");
	 scanf("%d,",&item);
	 index= lsearch(A,n,item);
	 if(index==-1)
	 {
	 	printf("\nElement not found...");
	 	exit(0);
	 }
	 else
	 {
	 	printf("\nElement found at index: %d",index);
	 	printf("\nElement found at position: %d",index+1);
	 }
	 return 0;	
}
int lsearch(int A[],int size,int item)
{
	for(i=0;i<size;i++)
	{
		if(A[i]==item)
		return i;
	}
	return -1;
}

