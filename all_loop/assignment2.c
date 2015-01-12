/*File Name:second.c
Author:K.S.Krishna Chandran
Description:To print the even number between 1-50
Date:12\09\14*/


#include<stdio.h>
int main()
{
	system("clear");
	int i;
	printf("\n\nThe even numbers between 1 - 50 are ");
	for(i=1;i<50;i++)
	{
		if((i%2)==0)
		{
			printf("\n%d",i);
		}
	}
	printf("\n\n");
	return 0;
}
