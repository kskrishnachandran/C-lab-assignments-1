/*File Name:assignment6.c
Author:K.S.Krishna Chandran
Description:To perform sum, multiplication and transpose of two matrices.
Date:07\11\14*/


#include<stdio.h>
int main()
{
	int m,n,p,q;
	int i,j,k;
	int choice;
	char ch;
	do
	{
		system("clear");
		printf("Enter the row and column size for matrix A\n");
		scanf("%d%d",&m,&n);
		int A[m][n];
		printf("\nEnter the elements for matrix A\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("\nEnter the row and column size for matrix B\n");
		scanf("%d%d",&p,&q);
		int B[p][q];
		printf("\nEnter the elements for matrix B\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&B[i][j]);
			}
		}
		system("clear");
		printf("\n\nMatrix A is \n");
		for(i=0;i<m;i++)
		{
			printf("\n");
			for(j=0;j<n;j++)
			{
				printf("%d  ",A[i][j]);
			}
		}     
		printf("\n\nMatrix B is \n");
		for(i=0;i<p;i++)
		{
			printf("\n");
			for(j=0;j<q;j++)
			{
				printf("%d  ",B[i][j]);
			}
		}
		int C[m][n];
		printf("\n\n");
		printf("Matrix Menu\n1.Sum Of Two Matrices\n2.Multiplication Of Two Matrices\n3.Transpose Of Two Matrices\n");
		printf("\nPlease enter your choice 1, 2 or 3\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
				printf("\n");
				printf("\nAddition of two matrices\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						C[i][j]=A[i][j]+B[i][j];
					}
				}
				printf("\nSum of matrices A and B is\n");
				for(i=0;i<m;i++)
				{
					printf("\n");
					for(j=0;j<n;j++)
					{
						printf("%d ",C[i][j]);
					}
				}
				printf("\n\n");
				break;
			case 2:
				printf("\n");
				printf("\nMultiplication of two matrices\n");
				if(m==q)
				{
					for(i=0;i<m;i++)
					{
						for(j=0;j<n;j++)
						{
							C[i][j]=0;
							for(k=0;k<n;k++)
							{
								C[i][j]=C[i][j]+A[i][k]*B[k][j];
							}
						}
					}
					printf("\nProduct of matrix A and B is ");
					for(i=0;i<m;i++)
					{
						printf("\n");
						for(j=0;j<n;j++)
						{
							printf("%d ",C[i][j]);
						}
					}
				}
				else
				{
					printf("\nThe matrices cannot be multiplied");
				}      
				break;
			case 3:
				printf("\n");
				printf("\nTransposing of elements of two matrices");
				int temp=0;
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						temp=A[i][j];
						A[i][j]=B[i][j];
						B[i][j]=temp;
					}
				}
				printf("\n\nMatrices A and B after transposing the elements");
				printf("\nMatrix A");
				for(i=0;i<m;i++)
				{
					printf("\n");
					for(j=0;j<n;j++)
					{
						printf("%d",A[i][j]);
					}
				}
				printf("\n\n");
				printf("\nMatrix B");
				for(i=0;i<m;i++) 
				{
					printf("\n");
					for(j=0;j<n;j++)
					{
						printf("%d",B[i][j]);
					}
				}
				break;
			default:
				printf("\n");
				printf("\nPlease enter a valid choice ");
		}
		printf("\nDo you want to continue(Y/N)");
		scanf(" %c",&ch); 
	}while(ch=='y'||ch=='Y');
	printf("\n\n");
	return 0;
} 

