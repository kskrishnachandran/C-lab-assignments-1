/*File Name:assignment5.c
Author:K.S.Krishna Chandran
Description:To use recurssion 
Date:13|11|14*/

#include<stdio.h>
int sum_recur(int);
int sum(int);
int main()
{
	system("clear");
	int n;
	printf("Enter any five digit number:");
	scanf("%d",&n);
	printf("\nUsing Recursion:%d\n",sum_recur(n));
	printf("Without Recursion:%d\n",sum(n));
    printf("\n\n");
	return 0;
}
int sum_recur(int n)
{
	if(n == 0)
	{
		return 0;
	}
	else
	{
		return (n % 10 + sum_recur(n / 10));
	}
}
int sum(int number)
{
	int last_digit, next_digit, total;
	last_digit = number%10;
	total = last_digit;
	next_digit = (number/10) % 10;
	total = total + next_digit;
	next_digit = (number/100) % 10;
	total = total + next_digit;
	next_digit = (number/1000) %10;
	total = total + next_digit;
	next_digit = (number/10000) %10;
	total = total + next_digit;
	return total;
}
