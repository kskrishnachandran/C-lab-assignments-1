/*File Name:assignment6.c
Author:K.S.Krishna Chandran
Description:To calculate distance
Date:13|11|14*/


#include <stdio.h>
#include <math.h>
double distance(double x1, double y1, double x2, double x3);
int main(void) 
{
	system("clear");
	double x1, y1, x2, y2;
	printf("Enter x1,y1,x2,y2: ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("The distance is %lf ", distance(x1, y1, x2, y2));
	printf("\n\n");
	return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
	double s1, s2, power, res;
	s1 = x1 - x2;
	s2 = y1 - y2;
	power = (pow(s1, 2 )+ pow(s2, 2));
	res = sqrt(power);
	return res;
}

