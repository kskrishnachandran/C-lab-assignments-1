/*File Name:assignment7.c
Author:K.S.Krishna Chandran
Description:To computrise the examination procedure of a class
Date:09\11\14*/


#include<stdio.h>
int main()
{ 
	system("clear");
   	int c;
	int i,j;
	char ch;
	printf("How student's detail you want to enter "); 
	scanf("%d",&c);
	int rno[c],mark1[c],mark2[c],mark3[c],mark4[c],mark5[c],mark6[c];
	char grade[c];
	int total[c],avg[c];
	printf("\n\nEnter the sudent details ");
	for(i=0;i<c;i++)
	{
		printf("\nEnter the details for student %d\n",i+1);
		printf("\nEnter roll number ");
		scanf("%d",&rno[i]);
		printf("\nEnter the marks in six subjects\n");
		scanf("%d%d%d%d%d%d",&mark1[i],&mark2[i],&mark3[i],&mark4[i],&mark5[i],&mark6[i]);
		total[i]=mark1[i]+mark2[i]+mark3[i]+mark4[i]+mark5[i]+mark6[i];
		avg[i]=total[i]/6;
	}
	for(i=0;i<c;i++)
	{
		if(avg[i]>=90)
		{
			grade[i]='A'; 
		}
		else if(avg[i]>=80&&avg[i]<90)
		{
			grade[i]='B';
		}
		else if(avg[i]>=70&&avg[i]<80)
		{
			grade[i]='C';
		}
		else if(avg[i]>=60&&avg[i]<70)
		{
			grade[i]='D';
		}
		else if (avg[i]<60)
		{
			grade[i]='E';
		}
	} 
	int srno,flag=0;
	do
	{
		printf("\n\nEnter the student's roll number whose details you want to see ");
		scanf("%d",&srno);
		for(i=0;i<c;i++)
		{
			if(srno==rno[i])
			{
				system("clear");
				printf("\nRoll number: %d\n",rno[i]);
				printf("\nMarks in six subjects: %d %d %d %d %d %d\n",mark1[i],mark2[i],mark3[i],mark4[i],mark5[i],mark6[i]); 
				printf("\nTotal of marks: %d\n",total[i]);
				printf("\nAverage of marks:%d\n",avg[i]);
				printf("\nGrade: %c\n",grade[i]);
				flag=1;
				break;
			}
			if(flag=0)
			{
				printf("\n Roll number donot exist\n");
				break;
			}
		}
		printf("\nDo you want to search any other record(Y/N) ");
		scanf(" %c",&ch);
	}while(ch=='Y'||ch=='y');
	printf("\n\n");       
	return 0;
}                                                  


