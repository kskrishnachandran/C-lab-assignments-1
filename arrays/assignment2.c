/*File Name:assignment2.c
Author:K.S.Krishna Chandran
Description:To perform linear search on arrays
Date:25\08\14*/


#include<stdio.h>
int main()
{
	system("clear");
	int n,i,j;
	printf("Enter the size of the array ");
	scanf("%d",&n);
	int arr[n];
	printf("\n\nEnter the array elements(max %d) ",n);
	for(i=0;i<n;i++) 
	{
		scanf("%d",&arr[i]);
	}
	int search;
	printf("Enter the number to be searched in the array ");
	scanf("%d",&search);
	int found;
	for(j=0;j<n;j++)
	{
		if(arr[j]==search)
		{
			found=1;
			break;
		}
		else
		{
			found=0;
		}
	}
	if(found==1)
	{ 
		printf("\n\nThe element %d found at %d index at position %d",search,j,j+1);
	}
	else
	{
		printf("\n\nThe element %d is not in the array",search);
	}
	printf("\n\n");
	return 0;
}
