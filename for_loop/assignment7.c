/*File Name:assignmetn7.c
Author:K.S.Krishna Chandran
Description:To convert a decimal number to its binary form
Date:18\09\14*/


#include<stdio.h>
int main()
{
	system("clear");
	int num,i,binary[25];
	printf("\n\nEnter any decimal number you want to convert to binary ");
	scanf("%d",&num);
	int bnum;
	for(i=0,bnum=num;bnum>1;i++)
	{
		if(bnum%2==1)
		{
			binary[i]=1;
		}
		else
		{
			binary[i]=0;
		}
		bnum=bnum/2;
		if(bnum==1)
		{
			binary[i+1]=1;
		}
	}
	printf("\n\nThe Binary form of %d is ",num);
	int j;
	for(j=i;j>=0;j--)
	{
		printf("%d",binary[j]);
	}
	printf("\n\n");
	return 0;
}



