/*File Name:assignment.c
Author:K.S.Krishna Chandran
Description:To create functions for calculating area of a cricle, rectangle, parallelogram, square.
Date:13|11|14*/



#include<stdio.h>
int circle();
int square();
int rectangle();
int parallelogram();
int main()
{
	int choice;
	char ch;
	do
	{
		system("clear");
		printf("Enter your choice \n");
		printf("\n1.Area of circle");
		printf("\n2.Area of square"); 
		printf("\n3.Area of rectangle");
		printf("\n4.Area of parallelogram\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				circle();
				break;
			case 2:
				square();
				break; 
			case 3:
				rectangle();
				break;
			case 4:
				parallelogram();
				break;
			default:
				printf("\n\nPlease enter a valid choice \n");
		}
		printf("\n\nDo you want to continue (Y/N) ");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	return 0;
}
int circle()
{
	float radius;
	printf("\n\nArea of a circle ");
	printf("\n\nEnter the radius of the circle ");          
	scanf("%f",&radius);
	printf("\nArea of the radius is %f",(22.7*(radius*radius)));
	printf("\n\n");
	return 0;
}
int square()
{
	float side;
	printf("\n\nArea of a square ");
	printf("\n\nEnter the side measurment of the square ");          
	scanf("%f",&side);
	printf("\nArea of the square is %f",side*side);
	printf("\n\n");
	return 0;

}
int rectangle()
{
	float length,breadth ;
	printf("\n\nArea of a rectangle ");
	printf("\n\nEnter the length and breadth of the rectangle ");          
	scanf("%f%f",&length,&breadth);
	printf("\nArea of the rectangle is %f",length*breadth);
	printf("\n\n");
	return 0;
}
int parallelogram()
{
	float breadth,height ;
	printf("\n\nArea of a parallelogram ");
	printf("\n\nEnter the breadth and of height the parallelogram ");          
	scanf("%f%f",&breadth,&height);
	printf("\nArea of the parallelogram is %f",breadth*height);
	printf("\n\n");
	return 0;
}

