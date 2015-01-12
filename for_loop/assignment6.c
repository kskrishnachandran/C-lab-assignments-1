/*File Name:assignmetn6.c
Author:K.S.Krishna Chandran
Description:To print the reverse of a given number
Date:17\09\14*/


#include<stdio.h>
int main()
{
	system("clear");
	int num,r=0;
	printf("\nEnter the number ");
	scanf("%d",&num);
	int rev;
	for(rev=num;rev!=0;rev=rev/10)
	{
		r=r*10;
		r=r+(rev%10);
	}
	printf("Reverse of the number %d is %d",num,r);
	printf("\n\n");
	return 0;
}
