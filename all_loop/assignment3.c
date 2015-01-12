/*File Name:third.c
Author:K.S.Krishna Chandran
Description:To print the multiplication table of 10 using while
Date:12\09\14*/



#include<stdio.h> 
int main()
{
	system("clear");
	printf("The multiplication table of 10 is ");
	int i=1;
	while(i<=10)
	{
		printf("\n10 X %d = %d",i,10*i);
		i++;
	}
	printf("\n\n");
	return 0;
}

