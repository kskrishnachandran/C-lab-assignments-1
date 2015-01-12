/*Author:K.S.Krishna Chandran
  File Name:assignment2.c
  Description:To find the largets of three numbers using structure.
  Date:08|12|14*/



#include<stdio.h>
struct lrage
{
	int a;
	int b;
	int c;
}la;                     //Structure variable
int main()
{
	char ch;
	do
	{
		system("clear");
		printf("Enter any three numbers\n");
		scanf("%d%d%d",&la.a,&la.b,&la.c);
		if((la.a==la.b)&&(la.a==la.c))
		{
			printf("\n\nThe numbers %d, %d, %d are equal ",la.a,la.b,la.c);
		}
		else
		{
			if((la.a>la.b)&&(la.a>la.c))
			{
				printf("\n%d is greater than %d and %d ",la.a,la.b,la.c);
			}
			else
			{
				if(la.b>la.c)
				{
					printf("\n%d is greater than %d and %d ",la.b,la.a,la.c);
				}
				else
				{
					printf("\n%d is greater than %d and %d ",la.c,la.a,la.b);
				}
			}
		}
		printf("\n\nDo you want to repeat the comparisson (Y/N)  ");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n");
	return 0;
}
