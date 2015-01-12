/*File Name:assignment9.c
Author:K.S.Krishna Chandran
Description:To find the binary equivalent of this number using recursion function
Date:13|11|14*/


#include<stdio.h>
long binary(int);
int main()
{
	system("clear");
	long bin;
	int n;
	printf("Enter any decimal number: ");
	scanf("%d",&n);
	bin=binary(n);
	printf("\n\nBinary value is: %ld",bin);
	printf("\n\n");
	return 0;
}
long binary(int x)
{
	static long bin=0,r,f= 1;
	if(x!=0)
	{
		r=x%2;
		bin+=r*f;
		f*=10;
		binary(x/2);
	}
	return bin;
}
