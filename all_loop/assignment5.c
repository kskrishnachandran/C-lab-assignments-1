/*File Name:fifth.c
Author:K.S.Krishna Chandran
Description:To multply two numbers by adding the larger one
Date:12\09\14*/



#include<stdio.h>
int main()
{
	system("clear");
	int large,product=0,small,i;
	printf("Enter two numbers for multiplication");
	printf("\n\nPlease enter the largset among the two numbers ");
	scanf("%d",&large);
	printf("\n\nPlease enter the smallest among the two numbers ");
	scanf("%d",&small);
	for(i=1;i<=small;i++)
	{ 
		product+=large;
	}
	printf("\n\nProduct=%d",product);
	printf("\n\n");
	return 0;
}

