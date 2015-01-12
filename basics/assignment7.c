/*File Name:temperature.c
Author:K.S.Krishna Chandran
Description:To print a message corresponding to its temperature
Date:22/08/14*/


#include<stdio.h>
int main()
{
	system("clear");
	float temp;
	printf("\nPlease enter the temperature in celsius ");
	scanf("%f",&temp);
	if(temp<=0)
	{
		printf("\nIt's Very Cold");
	}
	else
	{
		if((temp<0)&&(temp>10))
		{
			printf("\nIt's Cold");
		}
		else
		{
			if((temp>10)&&(temp<20))
			{
				printf("\nIt's Cool Outside");
			}
			else
			{
				if((temp>20)&&(temp<=30))
				{
					printf("\nIt's Warm");
				}
				else 
				{
					if(temp>30)
					{
						printf("\nIt's Hot");
					}
					else 
					{
						printf("\nINVALID INPUT");
					}
				}
			} 
		}
	}
	printf("\n\n");
	return 0;
}





