/*Name:K.S.Krishna Chandran
  File Name:matrixmul.c
  Description:To multiply two matrices
  Date:06/11/14*/



#include<stdio.h>
int main()
{ 
 int m,n;
 printf("\nEnter the row and column size for matrix A\n");
 scanf("%d%d",&m,&n);
 int A[m][n];
 printf("\nEnter the elements for matrix A\n");
 int i,j;
 for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
    {
     scanf("%d",&A[i][j]);
    }
  }
 int p,q;
 printf("\nEnter the row and column size for matrix B\n");
 scanf("%d%d",&p,&q);
 int B[p][q];
 printf("\nEnter the  elements for matrix B\n");
 for(i=0;i<p;i++)
  {
   for(j=0;j<q;j++)
    {
     scanf("%d",&B[i][j]);
    }
  }
 printf("\n\n\nMatrix A is \n");
 for(i=0;i<m;i++)
  {
   printf("\n");
   for(j=0;j<n;j++)
    {
     printf("%d ",A[i][j]);
    }
  }
  printf("\nMatrix B is \n");
  for(i=0;i<p;i++)
   {
    printf("\n");
    for(j=0;j<q;j++)
     {
      printf("%d ",B[i][j]);
     }
   }
 if(m==q)
  {
   int C[m][n];
   printf("\n\nPerforming matrix multiplication...");
   int k;
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
   printf("\n\nProduct of matrix A and B is ");
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
   printf("\n\n\nThe matrices cannot be multiplied");
  }
 printf("\n\n");
 return 0;
}    
 
