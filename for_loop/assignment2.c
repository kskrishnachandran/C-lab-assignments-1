/*File Name:assignment2.c
Author:K.S.Krishna Chandran
Description:To read the numbers untill -1 and count the number of +ve numbers -ve numbers and 0's
Date:17-09-14*/



#include<stdio.h>
int main()
{
	system("clear");
	int num,i,pcount=0,ncount=0,zcount=0;
	printf("\nEnter any numbers including positive and negative numbers");
	printf("\n\nThe last number should be -1\n\n");
	for(i=0;i==i;i++)
	{
		scanf("%d",&num);
		if(num>0)
		{
			pcount++;
		}
		else
		{
			if(num<0)
			{
				ncount++;
			}
			else
			{
				zcount++;
			}
		}
		if(num==-1)
		{
			break;
		}
	}
	printf("\n\nThe count of positive numbers=%d",pcount);
	printf("\n\nThe count of negative numbers=%d",ncount);
	printf("\n\nThe count of zeros you have entered=%d",zcount);
	printf("\n\n");
	return 0;   
}
