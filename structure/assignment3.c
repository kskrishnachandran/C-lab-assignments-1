/*Author:K.S.Krishna Chandran
  File Name:assignment3.c
  Description:To deal with a customer's bank account using structure.
  Date:08|12|14*/



#include<stdio.h>
typedef struct
{
	int acc_no;
	char name[35];
	int acc_bal;
}bank;
int baldisplay(bank *);   //function to display the customer details
int maodify(bank *);   //function to update the customer details
int display(bank *,int);
int n;
int main()
{
	bank ba[50];
	char ch;
	do
	{
		system("clear");
		printf("How many customer's details you want to store ");
		scanf("%d",&n);
		int i;
		for(i=0;i<n;i++)
		{
			printf("\nEnter the details for %d customer",i+1);
			printf("\nEnter the account number : ");
			scanf("%d",&ba[i].acc_no);
			printf("Enter the name of the customer : ");
			scanf("%s",ba[i].name);
			printf("Enter his current balance : ");
			scanf("%d",&ba[i].acc_bal);
		}
		baldisplay(ba);
		modify(ba);
		printf("\nDo you want to enter more customer details (Y/N)  ");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');
	printf("\n\n");
	return 0;
}

int baldisplay(bank a[])
{
	int j;
	printf("\n\nDetails of customers having balance below 2000");
	for(j=0;j<n;j++)
	{
		if(a[j].acc_bal<2000)
		{
			printf("\nAccount number : %d",a[j].acc_no);
			printf("\nName : %s",a[j].name);
		}
		printf("\n\n");
	}
	return 0;
}
int modify(bank m[])
{
	int c;
	char choice;
	int anum,i,f=0;
	int amt;
	do
	{
		printf("\n1.Cash withdrawal\n2.Cash deposit\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				printf("\nCash withdrawal");
				printf("\nEnter account number : ");
				scanf("%d",&anum);
				for(i=0;i<n;i++)
				{
					if(m[i].acc_no==anum)
					{
						f=1;
						printf("Enter the withdrawal amount : ");
						scanf("%d",&amt);
						m[i].acc_bal=m[i].acc_bal-amt;
						display(m,i);
						break;
      				}
				}
					if(f==0)
					{
						printf("\nPlease enter a valid account number");
					}
				break;
			case 2:
				printf("\nCash deposit");
				printf("\nEnter account number : ");
				scanf("%d",&anum);
				for(i=0;i<n;i++)
				{
					if(m[i].acc_no==anum)
					{
						f=1;
						printf("Enter the deposit amount : ");
						scanf("%d",&amt);
						m[i].acc_bal+=amt;
						display(m,i);
						break;
					}
				}	
				if(f==0)
				{
					printf("\nInvalid account number");
				}
				break;
			default :
				printf("\nInvalid option"); 
				break;
		}
		printf("\nDo you want to repeat the procedure (Y/N) ");
		scanf(" %c",&choice);
	}while(choice=='Y'||choice=='y');
}
int display(bank d[],int p)
{
	printf("\nCustomer details after modifying ");
	printf("\nAccount number : %d",d[p].acc_no);
	printf("\nName : %s",d[p].name);
	printf("\nAccount balance : %d",d[p].acc_bal);
	return 0;
}
