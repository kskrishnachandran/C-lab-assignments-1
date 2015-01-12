/*File Name:area.c
Author:K.S.Krishna Chandran
Description:To find the area of a rectangle
Date:22/08/14
 */


#include<stdio.h>
int main()
{
	system("clear");	
	float length,breadth,area;
	printf("Enter the length of the rectangle  ");
	scanf("%f",&length);
	printf("\n\nEnter the breadth of the rectangle  ");
	scanf("%f",&breadth);
	area=length*breadth;
	printf("\n\nThe area of the rectangle is %f",area);
	printf("\n\n");
	return 0;
} 
