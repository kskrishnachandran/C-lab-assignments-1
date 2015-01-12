/*Author:K.S.Krishna Chandran
  File Name:assignment5.c
Description:To deal with student records using structure and functions.
Date:05|12|14*/

#include<stdio.h>
typedef struct
{
	char name[50];
	int regno;
	char branch[20];
	float cgpa;
}student;
int n;
int max;
student display(student);
student strecord1(student *);
int main()
{
	system("clear");
	printf("How many student's details you want to enter  ");
	scanf("%d",&n);
	student std[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter details for student %d ",i+1);
		printf("\nEnter student's name  ");
		scanf("%s",std[i].name);
		printf("Enter student's registration number  ");
		scanf("%d",&std[i].regno);
		printf("Enter student's branch  ");
		scanf("%s",std[i].branch);
		printf("Enter student's CGPA  ");
		scanf("%f",&std[i].cgpa);
	}
	student stdetails;
	printf("\n\nDetails of the students with highest CGPA ");
	stdetails=strecord1(std);
	display(stdetails);
	printf("\n\n");
	return 0;
}

student strecord1(student s[])
{
	int j;
	for(j=0;j<n;j++)
	{
		if(s[j].cgpa>max)
		{
			max=s[j].cgpa;
		}
	}
	for(j=0;j<n;j++)
	{
		if(max==s[j].cgpa)
		{
			return(s[j]);
		}
	}
}
student display(student st)
{
	printf("\nName : %s",st.name);
	printf("\nRegistration number : %d",st.regno);
	printf("\nBranch : %s",st.branch);
	printf("\nCGPA : %f",st.cgpa);
}
