/*Author:K.S.Krishna Chandran
  File Name:assignment1.c
  Description:To use a structure and read students details and modify it.
  Date:05|12|14*/


#include<stdio.h>
typedef struct 
{
	int rno;
	char name[30];
	char batch[10]; 
	int total_marks;
	int contact_no;
}student;
int display(student *);
int n;
int main()
{ 
	system("clear");
	student st[60];
	printf("How many student's details you want to enter  ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the details for the %d student\n",i+1);
		printf("Enter student's roll number ");
		scanf("%d",&st[i].rno);
		printf("Enter student's name ");
		scanf("%s",st[i].name); 
		printf("Enter student's batch  ");
		scanf("%s",st[i].batch);
		printf("Enter student's total mark in five subjects (MAX .500)  ");
		scanf("%d",&st[i].total_marks);
		printf("Enter student's contact number ");
		scanf("%d",&st[i].contact_no);
	}  
	display(st);
	int ch;
	char c;
	int f=0;
	do
	{
		printf("\n\nEnter roll number of the student whose details you want to modify  ");
		scanf("%d",&ch);
		for(i=0;i<n;i++)
		{
			if(ch==st[i].rno)
			{
				printf("\nEnter student's new details ");
				printf("\nEnter student's roll number ");
				scanf("%d",&st[i].rno);
				printf("\nEnter student's name ");
				scanf("%s",st[i].name); 
				printf("\nEnter student's batch  ");
				scanf("%s",st[i].batch);
				printf("\nEnter student's total mark in five subjects (MAX .500)  ");
				scanf("%d",&st[i].total_marks);
				printf("\nEnter student's contact number ");
				scanf("%d",&st[i].contact_no);
				f=1;
			}
		}
		if(f==1)
		{
			printf("\nStudent details after maodifying\n");
			display(st);
		}
		else
		{
			printf("\nPlease enter a valid roll number ");
		}
		printf("\nDo you want to modify more student's details (Y/N)  "); 
		scanf(" %c",&c);
	}while(c=='y'||c=='Y');
	printf("\n");
	return 0;
}
int display(student s[])
{
	int j;
	for(j=0;j<n;j++)
	{
		printf("\n\nRoll number:  %d",s[j].rno);
		printf("\nName:  %s ",s[j].name);
		printf("\nTotal marks:  %d",s[j].total_marks);
		printf("\nContact number:  %d",s[j].contact_no);
	}
	return 0;
}
