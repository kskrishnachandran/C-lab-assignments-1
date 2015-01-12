/*File Name:assignment4.c
Author:K.S.Krishna Chandran
Description:To print the multiplication table of a number enterde by the user 
Date:17\09\14*/




#include<stdio.h> 
int main()
{
	system("clear");
	int n;
	printf("Enter the number whose 'MULTIPLICATION TABLE' should be printed ");
	scanf("%d",&n);
	int i;
	for(i=1;i<15;i++)
	{
		printf("\n%d X %d = %d",n,i,n*i);
	}
	printf("\n\n");
	return 0;
}

