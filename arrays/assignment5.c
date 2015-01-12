/*File Name:assignment5.c
Author:K.S.Krishna Chandran
Description:To find out the no:of odd numbers, even numbers, the maximum and the minimum number and the sum of each row and column of a 5*5 array
Date:07\11\14*/



#include<stdio.h>
int main()
{ 
	system("clear");
	int arr[5][5];
	int oddcount=0,evencount=0;
	int max=0,min;
	int rowsum=0,columnsum=0;
	printf("Enter the array elements\n");
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]%2==0)
			{
				evencount++;
			}
			else
			{
				oddcount++;
			}
		}
	}
	system("clear");
	printf("\nThe entered array is ");
	for(i=0;i<5;i++)
	{
		printf("\n\n");
		for(j=0;j<5;j++)
		{
			printf("%d ",arr[i][j]);
		}
	}
	printf("\n\n");
	printf("\nThe number of even numbers in the array is %d ",evencount);
	printf("\nThe number of odd numbers in the array is %d ",oddcount);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
			}
		}
	}
	printf("\n\n\nThe maximum value in the array is %d ",max);
	min=arr[0][0];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(arr[i][j]<min)
			{
				min=arr[i][j];
			}
		}
	}
	printf("\nThe minimum value in the array is %d ",min,"\n\n");
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		rowsum=0;
		for(j=0;j<5;j++)
		{
			rowsum+=arr[i][j];
		}
		printf("Sum of row %d is %d\n",i+1,rowsum);
	}
	printf("\n\n");
	for(j=0;j<5;j++)
	{
		columnsum=0;
		for(i=0;i<5;i++)
		{
			columnsum+=arr[i][j];
		}
		printf("sum of column %d is %d\n",j+1,columnsum);
	}
	printf("\n\n");
	return 0;
}

