/*File Name:Formule.c
Author:K.S.Krishna Chandran
Description:To perform a specific formule
Date:22/08/14
 */

#include<stdio.h>
int main()
{
	system("clear");
	int x,y,z;
	float ans;
	printf("Enter three numbers ");
	scanf("%d%d%d",&x,&y,&z);
	ans=((x+y)*z/y)+((x*z)-y);
	printf("\n\nAfter evaluating the formula ((x+y)*z/y)+((x*z)-y)");
	printf("\nWhere x=%d    Y=%d   and    z=%d",x,y,z);
	printf("\n\n %f",ans);
	printf("\n\n");
	return 0;
}
