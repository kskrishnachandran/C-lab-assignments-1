/*File Name:assignment3.c
Author:K.S.Krishna Chandran
Description:To create a calculator
Date:13|11|14*/


#include<stdio.h>
void add();
void subtract();
void multiply();
void divide();
int main()
{
	system("clear");
	int choice;
	printf("Enter your choice \n1.addition \n2.substraction \n3.multiplication \n4.division\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add();
			break;
		case 2:
			subtract();
			break;
		case 3:
			multiply();
			break;
		case 4:
			divide();
			break;
		default:
			printf("\nInvalid choice\n");
	}
	return 0;
	printf("\n\n");
}
void add()
{
	int a,b,res;
	printf("Enter the numbers to add\n");
	scanf("%d%d",&a,&b);
	res=a+b;
	printf("a+b=%d\n",res);
}
void subtract()
{	
	int a,b,res;
	printf("Enter the numbers to subtract\n");
	scanf("%d%d",&a,&b);
	res=a-b;
	printf("a-b=%d\n",res);
}
void multiply()
{
	int a,b,res;
	printf("Enter the numbers to multiply\n");
	scanf("%d%d",&a,&b);
	res=a*b;
	printf("a*b=%d\n",res);
}
void divide()
{
	int a,b,res;
	printf("Enter the numbers to divide\n");
	scanf("%d%d",&a,&b);
	res=a/b;
	printf("a/b=%d\n",res);
}
