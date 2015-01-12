/*File Name:assignment4.c
Author:K.S.Krishna Chandran
Description:To perform a menu driven program
Date:11\10\14*/


#include<stdio.h>
int main()
{
	int a[10],i,temp,j;
	char opt;
	do
	{
		system("clear");
		printf("Enter any ten numbers ");
		for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\n\nThe array is\n");
		for(i=0;i<10;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n\nARRAY MENU");
		printf("\n1.Sort in ascending order");
		printf("\n2.Sort in descending order");
		int choice;
		printf("\n\nEnter your choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
				printf("\n\nSorting the array in ascending order\n\n");
				for(i=0;i<10;i++)
				{
					for(j=0;j<10;j++)
					{
						if(a[i]<a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
				printf("\n\nThe array after sorting is\n\n");
				for(i=0;i<10;i++)
				{
					printf("%d\t",a[i]);
				} 
				break;
			case 2:
				printf("\n\nSorting the array in descending order\n\n");
				for(i=0;i<10;i++)
				{
					for(j=0;j<10;j++)
					{
						if(a[i]>a[j])
						{
							temp=a[i];
							a[i]=a[j];
							a[j]=temp;
						}
					}
				}
				printf("\n\nThe array after sorting is\n\n");
				for(i=0;i<10;i++)
				{
					printf("%d\t",a[i]);
				}
				break;
			default:
				printf("\n\nEnter a valid option");
		} 
		printf("\n\nDo you want to continue(Y/N)");
		scanf(" %c",&opt); 
	}while(opt=='y'||opt=='Y');
	printf("\n\n");
	return 0;
} 


