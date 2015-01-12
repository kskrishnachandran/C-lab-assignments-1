/*File Name:Arithmetic.c
Author:K.S.Krishna Chandran
Description:Program to perform arithmetic operations
Date:22/08/14*/


#include<stdio.h>
int main()
{
	system("clear");
	int a,b,sum,pro,difference;
	float quo,rem;
	printf("Enter two numbers  ");
	scanf("%d%d",&a,&b);
	sum=a+b;
	difference=a-b;
	pro=a*b;
	quo=(float)a/b;
	rem=a%b;
	printf("\nSum is = %d",sum);
	printf("\nDifference is= %d",difference);
	printf("\nProduct is= %d",pro);
	printf("\nQoutient is= %f",quo);
	printf("\nReminder is = %f",rem);
	printf("\n\n");
	return 0;
}


