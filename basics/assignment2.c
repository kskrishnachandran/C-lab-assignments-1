/*File Name:Unary.c
Author:K.S.Krishna Chandran
Description:Program to perform unary operations
Date:22/08/14
 */

#include<stdio.h>
int main()
{
	system("clear");
	int a;
	printf("Enter a numbers ");
	scanf("%d",&a);
	printf("\nThe number before incrementing  %d",a);
	printf("\nThe number after incrementing  %d ",++a);
	printf("\n\nThe number before decrementing  %d",a);
	printf("\nThe number after decrementing  %d",--a);
	printf("\n\n");
	return 0;
}

