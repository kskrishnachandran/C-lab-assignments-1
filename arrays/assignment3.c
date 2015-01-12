/*File Name:assignment6.c
Author:K.S.Krishna Chandran
Description:To read numbers and print it out if it is not a duplicate of a number already read.
Date:08\11\14*/



#include<stdio.h>
int main()
{
	system("clear");
	int arr[20];
	int i,j;
	printf("Enter any 20 numbers between 10 and 100\n");
	for(i=0;i<20;i++)
	{
		scanf("%d",&arr[i]);
	}
	system("clear");
	printf("\nThe entered array is \n");
	for(i=0;i<20;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<20;i++)
	{
		for(j=i+1;j<20;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=0;
			}
		}
	}
	printf("\n\nThe array without its duplicate(if any)\n\n");
	for(i=0;i<20;i++)
	{
		if(arr[i]!=0)
		{
			printf("%d ",arr[i]);
		}
	}
	printf("\n\n");
	return 0;
}



