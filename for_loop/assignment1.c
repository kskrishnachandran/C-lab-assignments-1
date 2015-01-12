/*File Name:assignmetn1.c
Author:K.S.Krishna Chandran
Description:To find the sum of first ten numbers
Date:12\09\14*/




#include<stdio.h>
int main()
{
	system("clear");
	int sum=0,i;
	for(i=1;i<=10;i++)
	{
		sum+=i;
	}
	printf("\n\n");
	printf("The sum of first ten numbers is = %d",sum);
	printf("\n\n");
	return 0;
}

