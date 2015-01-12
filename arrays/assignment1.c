/*File Name:assignment.c
Author:K.S.Krishna Chandran
Description:To enter the marks of students and print the average best and worst marks 
Date:25\08\14*/


#include<stdio.h>
int main()
{
	system("clear");
	int n,i,j;
	printf("How many student's mark do you want to enter ");
	scanf("%d",&n);
	int mark[n];
	printf("\nEnter the marks ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&mark[i]);
	}
	int total=0;
	for(j=0;j<n;j++)
	{
		total+=mark[j];
	}  

	int avg=total/n;
	int max=0;
	for(i=0;i<n;i++)
	{
		if(mark[i]>max)
		{
			max=mark[i];
		}
	}
	int min;
	for(j=0;j<n;j++)
	{
		if(mark[j]<min)
		{
			min=mark[j];
		}
	}
	printf("\n\nThe average mark=%d",avg);
	printf("\n\nThe best mark is %d",max);
	printf("\n\nThe worst mark is %d",min);
	printf("\n\n");
	return 0;
} 
