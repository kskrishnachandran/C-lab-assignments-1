/*File Name:first.c
Author:K.S.Krishna Chandran
Description:To print the first n numbers
Date:12\09\14*/


#include<stdio.h>
int main()
{
	system("clear");
	int n,i;
	printf("How many numbers do you want to print ");
	scanf("%d",&n);
	printf("\n\nThe first %d numbers are ",n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
	}
	printf("\n\n");
	return 0;
}
