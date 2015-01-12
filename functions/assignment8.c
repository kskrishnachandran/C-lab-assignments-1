/*File Name:assignment8.c
Author:K.S.Krishna Chandran
Description:To build a calculator to perform basic arithmetic operations (+, - , *, /) using C functions. 
Date:13|11|14*/



#include<stdio.h>
void addition();
void substraction();
void multiplication();
void division();
int main()
{
	system("clear");
	char choice;
	printf("Enter your choice \n+.addition \n-.substraction \n*.multiplication \n/.division\n");
	scanf("%c",&choice);
	switch(choice)
	{
		case '+':
			addition();
			break;
		case '-':
			substraction();
			break;
		case '*':
			multiplication();
			break;
		case '/':
			division();
			break;
		default:
			printf("Invalid option\n");
	}
	printf("\n\n");
	return 0;
}
void addition()
{
	int a,b,res;
	printf("Enter the numbers to be added\n");
	scanf("%d%d",&a,&b);
	res=a+b;
	printf("\n%d + %d = %d\n",a,b,res);
}
void substraction()
{	
	int a,b,res;
	printf("Enter the numbers to be subtracted\n");
	scanf("%d%d",&a,&b);
	res=a-b;
	printf("\n%d - %d = %d\n",a,b,res);
}
void multiplication()
{
	int a,b,res;
	printf("Enter the numbers to be multiplied\n");
	scanf("%d%d",&a,&b);
	res=a*b;
	printf("\n%d * %d = %d\n",a,b,res);
}
void division()
{
	int a,b,res;
	printf("Enter the numbers to be divided\n");
	scanf("%d%d",&a,&b);
	res=a/b;
	printf("\n%d / %d = %d\n",a,b,res);
}

