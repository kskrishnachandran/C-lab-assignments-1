/*File Name:assignment10.c
Author:K.S.Krishna Chandran
Description:To calculate x to the power of y, where y can be either negative or positive.
Date:13|11|14*/


#include<stdio.h>
void power(int,int);
int main()
{
	system("clear");
	int x,y,i;
	printf("Input the value of X and Y\n");
	scanf("%d%d",&x,&y);
	power(x,y);
	printf("\n\n");
	return 0;
}

void power(int x,int y)
{
	float res=1.0;
	int i,r=1;
	if(y>0)
	{	
		for(i=1;i<=y;i++)
		{
			r*=x;
		}
		printf("\nThe result of %d ^ %d is:%d\n",x,y,r);
	}
	else if(y<0)
	{
		for(i=y;i<0;i++)
		{
			res*=x;
		}
		printf("\nThe result of %d ^ %d is:%f\n",x,y,1/res);
	}
	else
	{
		printf("\nThe result of %d ^ %d is:%d\n",x,y,x);	
	}
}




