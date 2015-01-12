/*File Name:assignmetn5.c
Author:K.S.Krishna Chandran
Description:To classify a number as prime or composite
Date:12\09\14*/


#include<stdio.h>
int main()
{
	system("clear");
	int num,i,prime=0;
	printf("\n\nEnter the number ");
	scanf("%d",&num);
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
			prime=1;
			break;
		}
	}
	if(prime==1)
	{
		printf("\n\n%d is a PRIME number",num);
	}
	else
	{
		printf("\n\n%d is a COMPOSITE number",num);
	}
	printf("\n\n");
	return 0;
} 
