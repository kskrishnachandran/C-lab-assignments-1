/*File Name:bitwise.c
Author:K.S.Krishna Chandran
Description:To perform bitwise operation on two numbers
Date:27/08/14 */



#include<stdio.h>
int main()
{
	system("clear");
	int a,b;
	printf("Enter the first number ");
	scanf("%d",&a);
	printf("\nEnter the second number ");
	scanf("%d",&b);
	int or,and,xor;
	int rshifta,lshifta,rshiftb,lshiftb;
	or=a|b;
	and=a&b;
	xor=a^b;
	printf("\n\nThe output after Bitwise operations of the given numbers ");
	printf("\n\nBitwise OR=%d",or);
	printf("\n\nBitwise AND=%d",and);
	printf("\n\nCompliment of first=%d",~a);
	printf("\n\nCompliment of second=%d",~b);
	printf("\n\nExclusive or=%d",xor);
	printf("\n\nRight shift of first number %d",a>>2);
	printf("\n\nLeft shift of first number %d",a<<2);
	printf("\n\nRight shift of the second number %d",b>>2);
	printf("\n\nLeft shift of the second number %d",b<<2);
	printf("\n\n");
	return 0;
}

