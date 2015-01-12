/*File Name:assignment3.c
Author:K.S.Krishna Chandran
Description:To find the factorial of a number
Date:12\09\14*/




#include<stdio.h>
int main()
{
	system("clear");
	int num,i,factorial;
	printf("Enter the number ");
	scanf("%d",&num);
	factorial=num;
	for(i=num-1;i>0;i--)
	{
		factorial=factorial*i;
	}
	printf("\n\nThe factorial of %d is = %d",num,factorial);
	printf("\n\n");
	return 0;
}

