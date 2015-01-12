/*File Name:fourth.c
Author:K.S.Krishna Chandran
Description:To print the maximum of the numbers given by the user
Date:12\09\14*/


#include<stdio.h>
int main()
{
	system("clear");
	int n,num,i,max;
	printf("How many numbers you want to enter ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nEnter the %d number ",i);
		scanf("%d",&num);
		if(num>max)
		{
			max=num;
		}
	}
	printf("\n\nThe maximum or largest value is %d",max);
	printf("\n\n");
	return 0;

}

