/*Author:K.S.Krishna Chandran
  File Name:assignment4.c
  Description:To deal an employee details using srtucture and functions.
  Date:08|12|14*/


#include<stdio.h>
typedef struct
{
	int emp_code;
	char emp_name[50];
	char emp_doj[10];
	float emp_sal;
}employee;
int n;
employee empinfo(employee *);
int main()
{ 
	system("clear");
	printf("How many employee's details you want to enter   ");
	scanf("%d",&n);
	employee emp[n];
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter details for the %d employee ",i+1);
		printf("\n\nEnter employee code  ");
		scanf("%d",&emp[i].emp_code);
		printf("\nEnter employee name  ");
		scanf("%s",emp[i].emp_name);
		printf("\nEnter the date on which the employee joined the firm  ");
		scanf("%s",emp[i].emp_doj);
		printf("\nEnter the employees salary  ");
		scanf("%f",&emp[i].emp_sal);
	}
	employee eminfo;
	eminfo=empinfo(emp);
	printf("\n\nDetails of the employee having the highest salary ");
	printf("\n\nEmployee code : %d",eminfo.emp_code);
	printf("\nEmployee name : %s",eminfo.emp_name);
	printf("\nDate on which the employee joined :%s ",eminfo.emp_doj);
	printf("\nEmployee salary : %f",eminfo.emp_sal);
	printf("\n\n");
	return 0;
}
employee empinfo(employee e[])
{
	int max=0;
	int j,k;
	for(j=0;j<n;j++)
	{
		if(e[j].emp_sal>max)
		{
			max=e[j].emp_sal;
		}
	}
	for(j=0;j<n;j++)
	{
		if(max==e[j].emp_sal)
		{
			return(e[j]);
		}

	}
}

		


