/*File Name:assignmetn8.c
Author:K.S.Krishna Chandran
Description:To print a given pattern
Date:17\09\14*/



#include<stdio.h>
int main()
{
	system("clear");
	int i,j,n;
	printf("\n\nEnter the number of columns ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("%d  ",j);
		}
	}
	printf("\n\n");
	return 0;
}
