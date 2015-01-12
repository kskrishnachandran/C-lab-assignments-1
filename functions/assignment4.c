/*File Name:assignment4.c
Author:K.S.Krishna Chandran
Description:To receive marks received by a student in 5 subjects and returns the average and percentage of these marks to main function and print the results in main.
Date:13|11|14*/

#include<stdio.h>
float average(int,int);
int percentage(int,int);
int main()
{
	system("clear");
	int a,b,c,d,e,total,mark=500,percent;
	float avg;
	printf("Enter the marks of 5 subjects\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	avg=average(total,mark);
	percent=percentage(total,mark);
	printf("\nAverage mark is %f and percentage of mark is %d\n",avg,percent);
	printf("\n\n"); 
	return 0;
}
float average(int total,int mark)
{
	float m;
	m=(total/5);
	return m;
}
int percentage(int total ,int mark)
{
	int n;
	n=(total*100)/mark;
	return n;
}
