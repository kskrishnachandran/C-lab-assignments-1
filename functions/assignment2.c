/*File Name:assignment.c
Author:K.S.Krishna Chandran
Description:To swap two values using functions
Date:13|11|14*/


#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b;
	system("clear");
	printf("Enter the value for vriable A ");
	scanf("%d",&a);
	printf("\nEnter the value for variabke B ");  
	scanf("%d",&b);
	printf("\nThe value of A and B before swaping is A=%d  B=%d ",a,b);
	swap(a,b);
	printf("\n\n");
	return 0;
}
int swap(int x,int y)
{ 
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("\n\n\nThe value of A and B after swaping is A=%d  B=%d ",x,y);
	return 0;
}
