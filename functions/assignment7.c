/*File Name:assignment7.c
Author:K.S.Krishna Chandran
Description:To use a recursive function to calculate the factorial of a positive integer.
Date:13|11|14*/



#include<stdio.h>
int main()
{
	system("clear");
	int i,a;
	printf("Enter a number to find the Factorial\n");
	scanf("%d",&a);
	printf("\nFactorial of %d is ",a);
	if(a>=0)
	{
		printf("%d\n",fact(a));
	}
	else
	{
		printf("\nPlease enter a positive number");
	}
	printf("\n\n");
	return 0;
}

int fact(int x)
{
	int a=x;
	if(a==0)
	{
		return 1;
	}
	else
	{
		return(a*fact(x-1));
	}
}
